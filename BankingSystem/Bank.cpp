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
	cout << "이  름 : " << cusName << endl;
	cout << "잔  액 : " << balance << endl;
}

Account::~Account()
{
	delete[] cusName;
}

AccountHandler::AccountHandler()
	: accNum(0)
{}

void AccountHandler::ShowMenu() const
{
	//메뉴보기

	cout << endl;
	cout << "-----Menu-----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입    금" << endl;
	cout << "3. 출    금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
	cout << endl;
}

void AccountHandler::MakeAccount()
{
	int id, balance;
	char name[NAME_LEN];

	cout << endl;
	cout << "[계좌개설]" << endl;
	cout << "계좌ID : ";
	cin >> id;
	cout << "이  름 : ";
	cin >> name;
	cout << "입금액 : ";
	cin >> balance;
	cout << endl;

	accArr[accNum++] = new Account(id, balance, name);
}

void AccountHandler::DepositMoney()
{
	int money;
	int id;

	cout << "[입  금]" << endl;
	cout << "계좌ID : ";
	cin >> id;
	cout << "입금액";
	cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->GetAccID() == id) {
			if (money > 0) {
				accArr[i]->Deposit(money);
				cout << "입금완료" << endl;
				return;
			}
			else {
				cout << "입금실패" << endl;
				return;
			}
		}
	}

	cout << "유효하지 않은 ID 입니다." << endl << endl;

	return;
}

void AccountHandler::WithdrawMoney()
{
	int money;
	int id;

	cout << "[출  금]" << endl;
	cout << "계좌ID : ";
	cin >> id;

	cout << "출금액 : ";
	cin >> money;


	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->GetAccID() == id) {
			if (accArr[i]->Withdraw(money) == 0) {
				cout << "잔액부족" << endl << endl;
				return;
			}
			else {
				cout << "출금완료" << endl << endl;
				return;
			}
		}
	}

	cout << "유효하지 않은 ID입니다." << endl;

	return;
}

void AccountHandler::ShowAllAccInfo() const
{
	for (int i = 0; i < accNum; i++) {
		accArr[i]->ShowAccInfo();
		cout << endl;
	}
}

AccountHandler::~AccountHandler()
{
	for (int i = 0; i < accNum; i++) {
		delete accArr[i];
		
	}
}
