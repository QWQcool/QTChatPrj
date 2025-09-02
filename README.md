# QTChatPrj
项目描述:该项目为全栈即时通讯工具，支持添加好友，好友通信，聊天记录展示 1.前端基于Qt实现用户界面，通过QListWidget实现好友列表,利用 GridLayout和QPainter封装气泡聊天框组件，基于QT network模块封装http和tcp服务,并使用qss文件进行美化界面。 2.后端服务采用分布式设计,通过gRPC进行通信，支持断线重连。通过网关以及状态查询,分配聊天服务，达到负载均衡。 3.聊天服务采用asio 实现 tcp 可靠长链接异步通信和转发,采用多线程模式封装iocontext池提升并发性能。 4.数据存储采用mysql服务，并基于mysqlconnector库封装连接池，同时封装 redis连接池处理缓存数据，封装各类连接池保证多服务并发访问。 
