#include<iostream>
#include<cstring>
#include "bank.h"

using std::cout;
using std::cin;
using std::endl;

const int NAME_LEN = 20;

typedef struct node {
	int accid;
	int balance;
	char* name = new char[NAME_LEN];
	struct node* next = NULL;
} node;

node* head = NULL;
node* temp = NULL;
node* tale = NULL;

int main() {

	while (1) {

		ShowMenu();
		int input;
		cin >> input;

		switch (input) {
		case 1:
			MakeAccount();
			break;
		case 2:
			DepositMoney();
			break;
		case 3:
			WithdrawMoney();
			break;
		case 4:
			ShowInfo();
			break;
		case 5:
			return 0;
		}
	}

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

	int accid, balance;
	char *name = new char[NAME_LEN];

	cout << endl;
	cout << "[계좌개설]" << endl;
	cout << "계좌ID : ";
	cin >> accid;
	cout << "이  름 : ";
	cin >> name;
	cout << "입금액 : ";
	cin >> balance;

	bool isDuplicate = false;
	if (head == NULL) {
		head = new node();
		head->accid = accid;
		head->name = name;
		head->balance = balance;

		cout << "개설이 완료되었습니다.1" << endl << endl;

	} else {
		temp = head;
		while (temp->next != NULL) {

			if (temp->name == name) {
				cout << "중복된 계좌ID 입니다. 다시 시도해 주세요." << endl << endl;
				isDuplicate = true;
				break;
			}

			temp = temp->next;
		};

		if (!isDuplicate) {
			if(temp->next == NULL) temp->next = new node();
			temp->next->accid = accid;
			temp->next->name = name;
			temp->next->balance = balance;
			temp = temp->next;

			cout << "개설이 완료되었습니다.2" << endl << endl;
		}
	}

	


}

void DepositMoney()
{
	int accId, balance;

	cout << "계좌 ID : ";
	cin >> accId;
	cout << "입금액 : ";
	cin >> balance;

	//입금
	temp = head;
	while (temp != NULL) {

		if (temp->accid == accId) {
			temp->balance += balance;
			cout << "입금이 완료되었습니다." << endl;
			cout << "잔액 : " << temp->balance << endl;
			break;
		}
		else {
			temp = temp ->next;
		}
	}
}

void WithdrawMoney()
{
	//출금

	int accId, balance;

	cout << "계좌 ID : ";
	cin >> accId;
	cout << "출금액 : ";
	cin >> balance;

	temp = head;
	while (temp != NULL) {

		if (temp->accid == accId && temp->balance - balance > 0) {
			temp->balance -= balance;
			cout << "출금이 완료되었습니다." << endl;
			cout << "잔액 : " << temp->balance << endl;
			break;
		} else {
			cout << "잔액이 부족합니다." << endl;
			cout << "잔액 : " << temp->balance << endl;
			temp = temp -> next;
		}
	}
}

void ShowInfo()
{
	temp = head;
	while (temp != NULL) {
		cout << "계좌ID : " << temp->accid << endl;
		cout << "이  름 : " << temp->name << endl;
		cout << "잔  액 : " << temp->balance << endl;
		cout << endl;
		temp = temp->next;

	}
		
}
