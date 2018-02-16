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

void MakeAccount()
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

void DepositMoney()
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

void WithdrawMoney()
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

void ShowInfo()
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
