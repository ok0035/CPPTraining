#include "Bank.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Account::Account(int ID, int money, char * name) 
	: accID(ID), balance(money)
{
	cusName = new char(strlen(name) + 1);
	strcpy_s(cusName, strlen(name) + 1, name);
}

Account::Account(const Account & ref)
	: accID(ref.accID), balance(ref.balance)
{
	this->cusName = new char[strlen(ref.cusName) + 1];
	strcpy_s(this->cusName, strlen(ref.cusName) + 1, ref.cusName);
}

int Account::GetAccID() const
{
	return accID;
}

int Account::GetBalance() const
{
	return this->balance;
}

void Account::Deposit(int money)
{
	if (money > 0) {
		balance += money;
		cout << "�Ա��� �Ϸ�Ǿ����ϴ�." << endl;
	}
	else {
		cout << "�Աݿ� �����߽��ϴ�. �ݾ��� Ȯ�����ּ���." << endl;
	}
		
}

int Account::Withdraw(int money)
{
	if (money > 0 && money <= balance) {
		balance -= money;
		cout << "����� �Ϸ�Ǿ����ϴ�. �ݾ��� Ȯ���ϼ���." << endl;
		return money;
	}
	else {
		cout << "��ݿ� �����߽��ϴ�. �ݾ��� Ȯ�����ּ���." << endl;
		return 0;
	}
}

void Account::ShowAccInfo() const
{
	cout << "����ID : " << accID << endl;
	cout << "��  ��" << cusName << endl;
	cout << "��  ��" << balance << endl;
}

Account::~Account()
{
	delete[] cusName;
}
