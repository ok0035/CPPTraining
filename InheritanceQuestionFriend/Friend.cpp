#include "Friend.h"
#include <iostream>

using std::cout;
using std::endl;

MyFriendInfo::MyFriendInfo(const char * myname, int myage)
	: age(myage)
{
	name = new char[strlen(myname) + 1];
	strcpy_s(name, strlen(myname) + 1, myname);
}

void MyFriendInfo::ShowMyFriend()
{
	cout << "이름 : " << name << endl;
	cout << "나이 : " << age << endl;
}

MyFriendInfo::~MyFriendInfo()
{
	delete[] name;
	cout << "return Name Memory" << endl;
}

MyFriendDetailInfo::MyFriendDetailInfo(const char *name, int age, const char * myaddr, const char * myphone)
	: MyFriendInfo(name, age)
{
	addr = new char[strlen(myaddr) + 1];
	phone = new char[strlen(myphone) + 1];

	strcpy_s(addr, strlen(myaddr) + 1, myaddr);
	strcpy_s(phone, strlen(myphone) + 1, myphone);
}

void MyFriendDetailInfo::ShowMyFriendDetailInfo()
{
	ShowMyFriend();
	cout << "주소 : " << addr << endl;
	cout << "전화 : " << phone << endl << endl;
}

MyFriendDetailInfo::~MyFriendDetailInfo()
{
	delete[] addr;
	delete[] phone;
	cout << "return addr / phone memery" << endl;
}
