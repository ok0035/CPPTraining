#include<iostream>
#include<cstring>
#include "bankold.h"

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

		ShowMenuOld();
		int input;
		cin >> input;

		switch (input) {
		case 1:
			MakeAccountOld();
			break;
		case 2:
			DepositMoneyOld();
			break;
		case 3:
			WithdrawMoneyOld();
			break;
		case 4:
			ShowInfoOld();
			break;
		case 5:
			return 0;
		}
	}

}

void ShowMenuOld()
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

void MakeAccountOld()
{

	int accid, balance;
	char *name = new char[NAME_LEN];

	cout << endl;
	cout << "[���°���]" << endl;
	cout << "����ID : ";
	cin >> accid;
	cout << "��  �� : ";
	cin >> name;
	cout << "�Աݾ� : ";
	cin >> balance;

	bool isDuplicate = false;
	if (head == NULL) {
		head = new node();
		head->accid = accid;
		head->name = name;
		head->balance = balance;

		cout << "������ �Ϸ�Ǿ����ϴ�.1" << endl << endl;

	} else {
		temp = head;
		while (temp->next != NULL) {

			if (temp->name == name) {
				cout << "�ߺ��� ����ID �Դϴ�. �ٽ� �õ��� �ּ���." << endl << endl;
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

			cout << "������ �Ϸ�Ǿ����ϴ�.2" << endl << endl;
		}
	}

	


}

void DepositMoneyOld()
{
	int accId, balance;

	cout << "���� ID : ";
	cin >> accId;
	cout << "�Աݾ� : ";
	cin >> balance;

	//�Ա�
	temp = head;
	while (temp != NULL) {

		if (temp->accid == accId) {
			temp->balance += balance;
			cout << "�Ա��� �Ϸ�Ǿ����ϴ�." << endl;
			cout << "�ܾ� : " << temp->balance << endl;
			break;
		}
		else {
			temp = temp ->next;
		}
	}
}

void WithdrawMoneyOld()
{
	//���

	int accId, balance;

	cout << "���� ID : ";
	cin >> accId;
	cout << "��ݾ� : ";
	cin >> balance;

	temp = head;
	while (temp != NULL) {

		if (temp->accid == accId && temp->balance - balance > 0) {
			temp->balance -= balance;
			cout << "����� �Ϸ�Ǿ����ϴ�." << endl;
			cout << "�ܾ� : " << temp->balance << endl;
			break;
		} else {
			cout << "�ܾ��� �����մϴ�." << endl;
			cout << "�ܾ� : " << temp->balance << endl;
			temp = temp -> next;
		}
	}
}

void ShowInfoOld()
{
	temp = head;
	while (temp != NULL) {
		cout << "����ID : " << temp->accid << endl;
		cout << "��  �� : " << temp->name << endl;
		cout << "��  �� : " << temp->balance << endl;
		cout << endl;
		temp = temp->next;

	}
		
}
