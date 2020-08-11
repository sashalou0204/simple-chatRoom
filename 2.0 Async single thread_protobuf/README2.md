简单记录一下学习的三个主要的消息协议，以及这版的代码整理：

在传递的消息中有发送者的姓名，发送的内容以及聊天室的信息


一、序列化  ```SerilizationObject```
==
把所写的类/东西序列化是将其存放成文件或者存放在流，当对方接收到信号时，可以反序列化，构造回原来的信息
asio自带相关库：
```
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
```
三个类做的工作都是一样的：实现serialize方法，绑定Archive类对象能将输出的序列化，输入的反序列化

```cpp
class SBindName {
private:
  friend class boost::serialization::access;
  // When the class Archive corresponds to an output archive, the
  // & operator is defined similar to <<.  Likewise, when the class Archive
  // is a type of input archive the & operator is defined similar to >>.
  template <class Archive>
  void serialize(Archive &ar, const unsigned int version) {
    ar & m_bindName;
		//ar << m_bindName;
		//ar >> m_bindName;
  }
  std::string m_bindName;

public:
  SBindName(std::string name) : m_bindName(std::move(name)) {}
	SBindName() {}
  const std::string &bindName() const { return m_bindName; }
};
```
但是用序列化必须要在双方都是C++的情况下，有一定的局限性

序列化用法
==
- 在客户端中：与1.0是一样的，connect上就要做read，收到服务端的消息后就立刻将将消息变成流，

```cpp
boost::asio::async_read(
        socket_, boost::asio::buffer(read_msg_.body(), read_msg_.body_length()),/*读到消息*/
        [this](boost::system::error_code ec, std::size_t /*length*/) {
          if (!ec) {
            if (read_msg_.type() == MT_ROOM_INFO) {
              SRoomInfo info;
              std::stringstream ss(  /*变成流*/
                  std::string(read_msg_.body(),
                              read_msg_.body() + read_msg_.body_length()));
              boost::archive::text_iarchive ia(ss);//构造一个archive， 得到想要的形式
              ia & info;
              std::cout << "client: '";//输出
              std::cout << info.name();
              std::cout << "' says '";
              std::cout << info.information();
              std::cout << "'\n";
            }
```
在发送消息时， 从键盘得到msg，用``` parseMessage2```处理成需要的序列化形式，在```structHeader```函数中进行了保留，虽然最然并没有用这个方法，但还是记下来
这个函数做的事情其实就是以空格分开cmd和内容，
```cpp
outbuffer = seriliaze(SBindName(std::move(name)));//得到序列化内容，再setMessage()这个output就可以了
```

- 服务端：也是修改处理消息的地方
同样也先构造一个stringstream， 构造一个archive，将信息保存到序列化好的信息中

```cpp
std::string buildRoomInfo() const {
		SRoomInfo roomInfo(m_name, m_chatInformation);//得到一个序列化好的roominfo
		std::stringstream ss;//构造一个stringstream
		boost::archive::text_oarchive oa(ss);//构造一个序列化的类
		oa & roomInfo;//将得到的信息保存到roominfo中
		return ss.str();
	}
  ```


二、json方法
==
没有很深入地去研究，知道有ptree这样的数据结构，可以通过.put()放信息，.ptreeToJsonString()转换成一个字符串

```cpp  
ptree tree;
		tree.put("information", chat);
		outbuffer = ptreeToJsonString(tree); 
```
换了一种消息传输方法体现在在客户端与服务端中就是在处理消息的时候有变动， 即接收发送消息都要做相应的改变，但有一个基础点就是不管传输的内容是什么样的，
它都是以“流”的形式在传输，所以
- 服务端为例
```cpp 
//收到json信息，先转换为流
template <typename T> T toObject() {
    T obj;
    std::stringstream ss(std::string(
        read_msg_.body(), read_msg_.body() + read_msg_.body_length()));
    boost::archive::text_iarchive oa(ss);
    oa &obj;
    return obj;
  }

	ptree toPtree() {//转换为json这种树的结构
		ptree obj;
		std::stringstream ss(
				std::string(read_msg_.body(),
					read_msg_.body() + read_msg_.body_length()));
		boost::property_tree::read_json(ss, obj);
		return obj;
	}
  
  
   void handleMessage() {
    if (read_msg_.type() == MT_BIND_NAME) {
			auto nameTree = toPtree();
			m_name = nameTree.get<std::string>("name");
    } else if (read_msg_.type() == MT_CHAT_INFO) {
			auto chat = toPtree();
			m_chatInformation = chat.get<std::string>("information");

      auto rinfo = buildRoomInfo();
      chat_message msg;
      msg.setMessage(MT_ROOM_INFO, rinfo);
      room_.deliver(msg);
      .
      .
      .
  
```
收到消息开始广播，封装一个roominfo， 然后deliver


三、 protobuf
==
定义自己协议的格式， ``` protoc ```工具会自动生成用于消息传递的头文件及实现文件， 从```parseMessage4```代码看除了函数名不一样实现的工作其实是一样的，依旧在处理消息中做出相应改变即可

希望之后可以顺利实现多线程，并对多线程有一个更好的理解，然后就可以开始看下一步的项目，晚上记得要做题。。。。暂时先忙这两个，最后几天再开始复习吧。⛽


