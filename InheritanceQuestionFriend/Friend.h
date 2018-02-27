#ifndef __FRIEND__
#define __FRIEND__

class MyFriendInfo {
private:
	char *name;
	int age;

public:
	MyFriendInfo(const char *myname, int myage);
	void ShowMyFriend();
	~MyFriendInfo();
};

class MyFriendDetailInfo : public MyFriendInfo {
private:
	char *addr;
	char *phone;
public:
	MyFriendDetailInfo(const char *name, int age, const char *myaddr, const char *myphone);
	void ShowMyFriendDetailInfo();
	~MyFriendDetailInfo();
};

#endif //__FRIEND__
