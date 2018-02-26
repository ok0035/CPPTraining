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
		cout << "입금이 완료되었습니다." << endl;
	}
	else {
		cout << "입금에 실패했습니다. 금액을 확인해주세요." << endl;
	}
		
}

int Account::Withdraw(int money)
{
	if (money > 0 && money <= balance) {
		balance -= money;
		cout << "출금이 완료되었습니다. 금액을 확인하세요." << endl;
		return money;
	}
	else {
		cout << "출금에 실패했습니다. 금액을 확인해주세요." << endl;
		return 0;
	}
}

void Account::ShowAccInfo() const
{
	cout << "계좌ID : " << accID << endl;
	cout << "이  름" << cusName << endl;
	cout << "잔  액" << balance << endl;
}

Account::~Account()
{
	delete[] cusName;
}
