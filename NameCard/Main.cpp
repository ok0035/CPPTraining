#include<iostream>
#include "NameCard.h"

int main() {

	/*1�� NameCard Main*/
	//NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	//NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	//NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);

	//manClerk.ShowNameCardInfo();
	//manSenior.ShowNameCardInfo();
	//manAssist.ShowNameCardInfo();

	/*2�� NameCard Main*/
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard copy1 = manClerk;

	NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard copy2 = manSenior;

	
	//copy �Ͽ����� ��� ���� �ٸ� �޸𸮿� ����Ǿ������� �� �� �ִ�.
	manClerk.ShowNameCardInfo();
	manSenior.ShowNameCardInfo();
	copy1.ShowNameCardInfo();
	copy2.ShowNameCardInfo();

}