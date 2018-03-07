#include<iostream>
#include "Bank.h"

using std::cout;
using std::cin;
using std::endl;

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

Account *accArr[100];
int accNum = 0;

int main() {
	AccountHandler manager;
	int choice;

	while (1) {
		manager.ShowMenu();
		cout << "���� : ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case MAKE:
			manager.MakeAccount();
			break;
		case DEPOSIT:
			manager.DepositMoney();
			break;
		case WITHDRAW:
			manager.WithdrawMoney();
			break;
		case INQUIRE:
			manager.ShowAllAccInfo();
			break;
		case EXIT:
			delete[] accArr;
			return 0;
		default:
			cout << "Illegal selection.." << endl;
		}
	}

	return 0;
}

//void ShowMenu()
//{
//	//�޴�����
//
//	cout << endl;
//	cout << "-----Menu-----" << endl;
//	cout << "1. ���°���" << endl;
//	cout << "2. ��    ��" << endl;
//	cout << "3. ��    ��" << endl;
//	cout << "4. �������� ��ü ���" << endl;
//	cout << "5. ���α׷� ����" << endl;
//	cout << endl;
//}
//
//void MakeAccount()
//{
//	int id, balance;
//	char name[NAME_LEN];
//
//	cout << endl;
//	cout << "[���°���]" << endl;
//	cout << "����ID : ";
//	cin >> id;
//	cout << "��  �� : ";
//	cin >> name;
//	cout << "�Աݾ� : ";
//	cin >> balance;
//	cout << endl;
//
//	accArr[accNum++] = new Account(id, balance, name);
//}
//
//void DepositMoney()
//{
//	int money;
//	int id;
//
//	cout << "[��  ��]" << endl;
//	cout << "����ID : ";
//	cin >> id;
//	cout << "�Աݾ�";
//	cin >> money;
//
//	for (int i = 0; i < accNum; i++) {
//		if (accArr[i]->GetAccID() == id) {
//			if (money > 0) {
//				accArr[i]->Deposit(money);
//				cout << "�ԱݿϷ�" << endl;
//				return;
//			}
//			else {
//				cout << "�Աݽ���" << endl;
//				return;
//			}
//		}
//	}
//	return;
//}
//
//void WithdrawMoney()
//{
//	int money;
//	int id;
//
//	cout << "[��  ��]" << endl;
//	cout << "����ID : ";
//	cin >> id;
//
//	cout << "��ݾ� : ";
//	cin >> money;
//
//
//	for (int i = 0; i < accNum; i++) {
//		if (accArr[i]->GetAccID() == id) {
//			if (accArr[i]->Withdraw(money) == 0) {
//				cout << "�ܾ׺���" << endl << endl;
//				return;
//			}
//			else {
//				cout << "��ݿϷ�" << endl << endl;
//				return;
//			}
//		}
//	}
//
//	cout << "��ȿ���� ���� ID�Դϴ�." << endl;
//
//	return;
//}
//
//void ShowAllAccInfo()
//{
//	for (int i = 0; i < accNum; i++) {
//		accArr[i]->ShowAccInfo();
//		cout << endl;
//	}
//}


