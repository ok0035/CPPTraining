#include "Friend.h"

int main() {

	MyFriendInfo *myFriendInfo = new MyFriendInfo("±èÇý³ª", 24);
	MyFriendDetailInfo *myFriendDetailInfo = new MyFriendDetailInfo("±èÇý³ª", 24, "ÁÖ°ø 7´ÜÁö", "010-4518-9013");

	myFriendInfo->ShowMyFriend();
	myFriendDetailInfo->ShowMyFriendDetailInfo();

	delete myFriendInfo;
	delete myFriendDetailInfo;

	return 0;
}