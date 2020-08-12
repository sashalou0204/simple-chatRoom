在原基础上多增加了线程，多增加了客户端: 开一个“线程池”

```cpp
boost::asio::io_service io_service;
std::vector<std::unique_ptr<chat_client>> clientGroup;

for(int i = 0; i < 10; ++i)//模拟多个client
{
	clientGroup.emplace_back(std::make_unique<chat_client>(io_service,endpoint_iterator));
```

```cpp
std::vector<std::thread> threadGroup;//开个“线程池”
for(int i = 0; i < 5; ++i) {
	threadGroup.emplace_back([&io_service, i]{
		std::cout << i << " name is " << std::this_thread::get_id() << std::endl;
		io_service.run();});
}
```
将结论直接放上来，在多线程中哪些函数是线程安全的哪些不是要有数
代码中的STL就不是线程安全的，就需要考虑加锁的问题，但是加锁需要考虑锁的粒度，如果加一整个读取lock， 如果直接上mutex， std::lock_guard<std::mutex>，那在本代码中其实与单线程也没有什么区别了。
怎么解决呢。。。与我无关，asio直接提供了strand函数用于代替mutex， 没想到最后多线程实现得这么突然
anyway， 最后就是将服务端的char_room，chat_server都改成strand保护， 以及所有的操作包括读些交互等

- 每个strand下面包裹wrap/post的程序，其之中顺序永远都不会混乱，即不可能在两个线程下同时去跑同一个主逻辑，也就做到了代码可以在任意线程下跑但是永远不会跑乱。即传说中的多线程


----
这次的boost网络库学到了什么呢……还是将服务器框架过了一遍，觉得服务端框架或许就是这样，但是怎么在服务端客户端之间更有效率的传递消息怎么传递才是难点?(不知道）还了解到了消息协议设计这个知识，
多线程之类的还是比较潦草，proactor模式也没有得到很直观的认识，或许接下来去看看木铎，和reactor模式对比之后能更深刻。
muduo中的事件机制、线程池要好好去了解，就立刻马上去做吧

至于刷题……也是太难了，力扣把思路变成代码怎么都会出不来，还是要加油更努力才行啊

另：之后不能忘记要去剖析一下boost库的智能指针吧。。。
