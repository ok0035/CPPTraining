#include "NameCard.h"
#include<iostream>

using std::cout;
using std::endl;

NameCard::NameCard(const char *name, const char *company, const char *phone, COMP_POS rank)
{
	this->Name = new char[strlen(name) + 1];
	strcpy_s(this->Name, strlen(name) + 1, name);

	this->Company = new char[strlen(company) + 1];
	strcpy_s(this->Company, strlen(company) + 1, company);

	this->Phone = new char[strlen(phone) + 1];
	strcpy_s(this->Phone, strlen(phone) + 1, phone);

	const char* str;

	switch (rank) {
		
	case COMP_POS::CLERK:
		str = "CLERK";
		break;
	case COMP_POS::ASSIST:
		str = "ASSIST";
		break;
	case COMP_POS::SENIOR:
		str = "SENIOR";
		break;
	case COMP_POS::MANAGER:
		str = "MANAGER";
		break;
	default:
		str = "NULL";
		break;
	}

	this->Pos = new char[strlen(str) + 1];
	strcpy_s(Pos, strlen(str) + 1, str);
}

NameCard::~NameCard()
{
	delete[] Company;
	delete[] Phone;
	delete[] Name;
	delete[] Pos;
}

void NameCard::ShowNameCardInfo()
{
	cout << "�̸� : " << this->Name <<endl;
	cout << "ȸ�� : " << this->Company << endl;
	cout << "��ȭ��ȣ : " << this->Phone << endl;
	cout << "���� : " << this->Pos << endl;
	cout << endl;
}
