#include "Friend.h"

int main() {

	MyFriendInfo *myFriendInfo = new MyFriendInfo("������", 24);
	MyFriendDetailInfo *myFriendDetailInfo = new MyFriendDetailInfo("������", 24, "�ְ� 7����", "010-4518-9013");

	myFriendInfo->ShowMyFriend();
	myFriendDetailInfo->ShowMyFriendDetailInfo();

	delete myFriendInfo;
	delete myFriendDetailInfo;

	return 0;
}