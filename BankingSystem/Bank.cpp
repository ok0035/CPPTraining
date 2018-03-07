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
	cout << "��  �� : " << cusName << endl;
	cout << "��  �� : " << balance << endl;
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
	//�޴�����

	cout << endl;
	cout << "-----Menu-----" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. ��    ��" << endl;
	cout << "3. ��    ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
	cout << endl;
}

void AccountHandler::MakeAccount()
{
	int id, balance;
	char name[NAME_LEN];

	cout << endl;
	cout << "[���°���]" << endl;
	cout << "����ID : ";
	cin >> id;
	cout << "��  �� : ";
	cin >> name;
	cout << "�Աݾ� : ";
	cin >> balance;
	cout << endl;

	accArr[accNum++] = new Account(id, balance, name);
}

void AccountHandler::DepositMoney()
{
	int money;
	int id;

	cout << "[��  ��]" << endl;
	cout << "����ID : ";
	cin >> id;
	cout << "�Աݾ�";
	cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->GetAccID() == id) {
			if (money > 0) {
				accArr[i]->Deposit(money);
				cout << "�ԱݿϷ�" << endl;
				return;
			}
			else {
				cout << "�Աݽ���" << endl;
				return;
			}
		}
	}

	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;

	return;
}

void AccountHandler::WithdrawMoney()
{
	int money;
	int id;

	cout << "[��  ��]" << endl;
	cout << "����ID : ";
	cin >> id;

	cout << "��ݾ� : ";
	cin >> money;


	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->GetAccID() == id) {
			if (accArr[i]->Withdraw(money) == 0) {
				cout << "�ܾ׺���" << endl << endl;
				return;
			}
			else {
				cout << "��ݿϷ�" << endl << endl;
				return;
			}
		}
	}

	cout << "��ȿ���� ���� ID�Դϴ�." << endl;

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
