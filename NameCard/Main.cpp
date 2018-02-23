#include<iostream>
#include "NameCard.h"

int main() {

	/*1차 NameCard Main*/
	//NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	//NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	//NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);

	//manClerk.ShowNameCardInfo();
	//manSenior.ShowNameCardInfo();
	//manAssist.ShowNameCardInfo();

	/*2차 NameCard Main*/
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard copy1 = manClerk;

	NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard copy2 = manSenior;

	
	//copy 하였지만 모두 서로 다른 메모리에 저장되어있음을 알 수 있다.
	manClerk.ShowNameCardInfo();
	manSenior.ShowNameCardInfo();
	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();

}