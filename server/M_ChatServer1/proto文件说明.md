syntax = "proto3";

package message;

service VarifyService {
  rpc GetVarifyCode (GetVarifyReq) returns (GetVarifyRsp) {}
}

message GetVarifyReq {
  string email = 1;
}

message GetVarifyRsp {
  int32 error = 1;
  string email = 2;
  string code = 3;
}
//获取服务器请求
message GetChatServerReq {
  int32 uid = 1;
}
//应答
message GetChatServerRsp {
  int32 error = 1;
  string host = 2;
  string port = 3;
  string token = 4;
}
//与状态服务器通信，状态服务器记录登录数量
message LoginReq{
	int32 uid = 1;
	string token= 2;
}

message LoginRsp {
	int32 error = 1;
	int32 uid = 2;
	string token = 3;
}

service StatusService {
	rpc GetChatServer (GetChatServerReq) returns (GetChatServerRsp) {}
	rpc Login(LoginReq) returns(LoginRsp);
}
//添加好友请求
message AddFriendReq {
	int32  applyuid = 1;
	string name = 2;
	string desc = 3;
	//string icon = 4;
	//string nick = 5;
	//int32  sex = 6;
	int32  touid = 4;//7;
}
//对端回复
message AddFriendRsp {
	int32 error = 1;
	int32 applyuid = 2;
	int32 touid = 3;
}
//收到好友申请后，回复请求
message RplyFriendReq {
	int32 rplyuid = 1;
	bool  agree = 2;
	int32 touid = 3;
}
//对端回复
message RplyFriendRsp {
	int32 error = 1;
	int32 rplyuid = 2;
	int32 touid = 3;
}
//发送聊天信息请求
message SendChatMsgReq{
		int32 fromuid = 1;
		int32 touid = 2;
		string message = 3;
}
//对端回复
message SendChatMsgRsp{
		int32 error = 1;
		int32 fromuid = 2;
		int32 touid = 3;
}
//请求认证通知
message AuthFriendReq{
	int32 fromuid = 1;
	int32 touid = 2;
}
//回复
message AuthFriendRsp{
	int32 error = 1;
	int32 fromuid = 2;
	int32 touid = 3;
}
//文本信息请求
message TextChatMsgReq {
	int32 fromuid = 1;
    int32 touid = 2;
	repeated TextChatData textmsgs = 3;
}
//消息属性
message TextChatData{
	string msgid = 1;//标识已读未读
	string msgcontent = 2;
}

message TextChatMsgRsp {
	int32 error = 1;
	int32 fromuid = 2;
	int32 touid = 3; 
	repeated TextChatData textmsgs = 4;
}

service ChatService {
	rpc NotifyAddFriend(AddFriendReq) returns (AddFriendRsp) {}
	rpc RplyAddFriend(RplyFriendReq) returns (RplyFriendRsp) {}
	rpc SendChatMsg(SendChatMsgReq) returns (SendChatMsgRsp) {}
	rpc NotifyAuthFriend(AuthFriendReq) returns (AuthFriendRsp) {}
	rpc NotifyTextChatMsg(TextChatMsgReq) returns (TextChatMsgRsp){}
}