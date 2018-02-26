#include<iostream>
#include "Bank.h"
#include "Main.h"

using std::cout;
using std::cin;
using std::endl;

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

Account *accArr[100];
int accNum = 0;

int main() {
	int choice;

	while (1) {
		ShowMenu();
		cout << "선택 : ";
		cin >> choice;
		cout << endl;

		switch (choice) {
		case MAKE:
			MakeAccount();
			break;
		case DEPOSIT:
			DepositMoney();
			break;
		case WITHDRAW:
			WithdrawMoney();
			break;
		case INQUIRE:
			ShowAllAccInfo();
			break;
		case EXIT:
			for (int i = 0; i < accNum; i++) {
				delete accArr[i];
			}
			return 0;
		default:
			cout << "Illegal selection.." << endl;
		}
	}

	return 0;
}

void ShowMenu()
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

void MakeAccount()
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

	accArr[accNum++] = new Account(id, balance, name);
}

void DepositMoney()
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
	return;
}

void WithdrawMoney()
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
}

void ShowAllAccInfo()
{
	for (int i = 0; i < accNum; i++) {
		accArr[i]->ShowAccInfo();
		cout << endl;
	}
}


