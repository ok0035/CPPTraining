#include "Bank2.h"
#include <iostream>
#include "Interface.h"

#define NAME_LEN	20

void ShowMenu();
void makeAccount();
void DepositMoney();
void WithdrawMoney();

using std::cout;
using std::cin;
using std::endl;

Account *accArr[100];
int accNum = 0;

int main() {

	int choice;

	while (1) {

	}

	return 0;
}

void ShowMenu()
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

void makeAccount() {
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[���°���]" << endl;
	cout << "����ID : "; cin >> id;
	cout << "��  �� : "; cin >> name;
	cout << "�Աݾ� : "; cin >> balance;
	cout << endl;

	accArr[accNum++] = new Account(id, balance, name);

}

void DepositMoney() {

}

void WithdrawMoney() {

}