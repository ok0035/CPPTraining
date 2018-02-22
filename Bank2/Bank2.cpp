#include "Bank2.h"
#include<iostream>

//int accID; // ���¹�ȣ
//int balance; // ��  ��
//char *cusName; //���̸�

using std::cout;
using std::endl;

enum {MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

Account::Account(int ID, int money, char * name) : accID(ID), balance(money)
{
	cusName = new char[strlen(name) + 1];
	strcpy_s(cusName, strlen(name) + 1,name);
}

int Account::GetAccID() const
{
	return accID;
}

void Account::Deposit(int money)
{
	balance += money;
}

int Account::Withdraw(int money)
{
	if (balance < money) {
		return 0;
	}

	balance -= money;
	return money;
}

void Account::ShowAccInfo()
{
	cout << "����ID : " << accID << endl;
	cout << "��  �� : " << cusName << endl;
	cout << "��  �� : " << balance << endl;
}

Account::~Account()
{
	delete[] cusName;
}
