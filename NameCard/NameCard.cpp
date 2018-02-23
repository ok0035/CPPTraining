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

NameCard::NameCard(NameCard & copy)
{
	this->Name = new char[strlen(copy.Name) + 1];
	this->Company = new char[strlen(copy.Company) + 1];
	this->Phone = new char[strlen(copy.Phone) + 1];
	this->Pos = new char[strlen(copy.Pos) + 1];

	strcpy_s(this->Name, strlen(copy.Name) + 1, copy.Name);
	strcpy_s(this->Company, strlen(copy.Company) + 1, copy.Company);
	strcpy_s(this->Phone, strlen(copy.Phone) + 1, copy.Phone);
	strcpy_s(this->Pos, strlen(copy.Pos) + 1, copy.Pos);

}

NameCard::~NameCard()
{
	cout << "destruction" << endl;
	delete[] Company;
	delete[] Phone;
	delete[] Name;
	delete[] Pos;
}

void NameCard::ShowNameCardInfo()
{
	cout << "이름 : " << this->Name << " " << &Name << endl;
	cout << "회사 : " << this->Company << " " << &Company<< endl;
	cout << "전화번호 : " << this->Phone << " " << &Phone << endl;
	cout << "직급 : " << this->Pos << " " << &Pos << endl;
	cout << endl;
}
