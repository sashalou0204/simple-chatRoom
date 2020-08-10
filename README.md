# simple-chatRoom
#first commit
这是学习asio过程中，想简单用boost/asio实现简单服务器的记录过程，为之后想实现的web server项目打个底，希望也可以在这边先实现简单的多线程。。。

第一次提交，只是实现了最基础（无用）的功能：一个客户端发消息其他房间的人可以看见消息， 也没有绑定是哪个客户端实现的，可以理解为只实现了最简单的一个服务器框架==

编译运行：
```cpp  
make server
make client
./server port //绑定一个端口号， server就会监听这个端口号，即等待客户端发来的消息
./client port  //客户端如果连接成功，就可以直接发送消息了  可以开多个客户端
  
```

首先服务端：
==

一、聊天服务器最基础的三个功能：加入房间、离开房间、将消息分发出去分别是现在chat_room类中， 每一个加入的客户端以及发送的消息作为聊天室类的成员变量
```cpp  
class chat_room {//聊天室的三个功能，加入房间，离开房间，有人说话把消息分发出去
public:
public:
	void join(chat_session_ptr);
	void leave(chat_session_ptr);
	void deliver(const chat_message&);
private:
  std::set<chat_session_ptr> participants_;//将加入的用户保存在一个set容器中
  enum { max_recent_msgs = 100 };//最多保存前100条消息
  chat_message_queue recent_msgs_;
```

二、 运行服务端的时候，首先当然是构造一个server并确定要监听的端口号 ```  std::list<chat_server> servers; ```

监听端口并accept的工作实现在chat_server类中， 在实现代码中频繁用到了lambda函数，用于实现回调函数
```cpp  
class chat_server {
public:
  chat_server(boost::asio::io_service &io_service,
              const tcp::endpoint &endpoint)//检查这个端口号是否有效， 有效就可以去连接。等待连接do_accept了
      : acceptor_(io_service, endpoint), socket_(io_service) {
    do_accept();//构造完就可以直接做这个函数，但是如果是继承于智能指针的话不可以这么做
  }

private:
  void do_accept() {{//用async_accept，实现异步的连接， 即不管当下的这一个是否连接成功都会继续去监听
    acceptor_.async_accept(socket_, [this](boost::system::error_code ec) 
      if (!ec) {//还是用lambda函数来判断是否连接成功，连接成功就去下一步，就可以去房间了
        auto session =
            std::make_shared<chat_session>(std::move(socket_), room_);
        session->start();//去session了
      }

      do_accept();
    });
  }

  tcp::acceptor acceptor_;//有专门去连接acccept的对象，不用费心就很赞
  tcp::socket socket_;//每一个新的客户端连接进来时都要生成一个新的socket来与对应的客户端进行通信
  chat_room room_;
};

```
三、连接成功的话，一个客户端就可以进入“聊天室工作”的函数了， 首先肯定是join房间， 在join函数中实现了向这个用户分发deliver保存的前100条消息（如果有的话）的功能；
这样，一个客户端就算是加入成功了，那怎么看到别的客户端发的消息呢？是客户端在一个客户加入之后就read_header()函数上了，去buffer读数据， 读到数据的话服务端再向客户端发送，这个过程分为read_header()到read_body()，一整条消息读完然后deliver()给客户。
看一下deliver函数， 将消息队列的内容write到buffer中
```cpp  
void deliver(const chat_message &msg) {
    bool write_in_progress = !write_msgs_.empty();
    write_msgs_.push_back(msg);
    if (!write_in_progress) {//消息队列空的时候， 将读到地消息发送给客户端， 就是写到buffer里去
      do_write();
    }
  }
  
  ...
  
  void do_write() {
    auto self(shared_from_this());
    boost::asio::async_write(//异步地写
        socket_, boost::asio::buffer(write_msgs_.front().data(),
                                     write_msgs_.front().length()),
        [this, self](boost::system::error_code ec, std::size_t /*length*/) {
          if (!ec) {
            write_msgs_.pop_front();
            if (!write_msgs_.empty()) {
              do_write();
            }
          } else {
            room_.leave(shared_from_this());
          }
        });
  }
```

再重点讲：chat_session是由智能指针来管理的，所以不能再构造函数的时候就去做start()， 另外读消息的时候是分为读header和读body两步的，因为消息内容是不确定的，我们可以通过header知道消息的长度。这也是头文件chat_message.h做的事情

客户端
==
客户端代码写法与服务端本质相同，先构造client，在构造中去connect地址， connect成功了就立刻read消息，联系上文，服务端会在join房间后发消息的，本客户端想要发消息首先getline从键盘中得到消息，然后write到buffer， 简简单单
其中resolver函数是用来解析地址的，据说非常耗时， 其中还用了post函数是为了让那个事件在io_service的控制下去跑

io_service
==
不管是client还是server首先就是定义一个io_service,在构造函数中也会又ioservice，因为它是与底层交互的“桥梁”，异步处理中事件发送给io_service之后就立刻去做别的事了，操作系统完成要做的事回给io_service， io_service并不会立刻调用事件所绑定的回调函数，而是会在某一个时刻将积攒的事件全部处理，这个时刻就是在``` io_service.run() ``` 的时候, 当ioservice中没有注册事件了，run就会返回（或者出错返回

shared_from_this
==
返回一个当前类的std::share_ptr
类A被share_ptr管理，且在类A的成员函数里需要把当前类对象作为参数传给其他函数时，就需要传递一个指向自己的share_ptr

chat_message.h
==
目前只能广播消息，至少下次要携带信息，那是靠这个进行传递消息
