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

void makeAccount() {
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID : "; cin >> id;
	cout << "이  름 : "; cin >> name;
	cout << "입금액 : "; cin >> balance;
	cout << endl;

	accArr[accNum++] = new Account(id, balance, name);

}

void DepositMoney() {

}

void WithdrawMoney() {

}