#ifndef __BANK__
#define __BANK__

#define NAME_LEN	20

/*
Ŭ���� �̸� : Account
Ŭ���� ���� : Entity Ŭ����
*/

class Account {

private: 
	int accID; // ���¹�ȣ
	int balance; // �ܾ�
	char * cusName; // ���̸�

public:
	Account(int ID, int money, char *name);
	Account(const Account &ref);
	int GetAccID() const;
	int GetBalance() const;
	void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo() const;
	~Account();
};

 /*
 Ŭ���� �̸� : AccountHandler
 Ŭ���� ���� : ��Ʈ��(Control) Ŭ����
 */

class AccountHandler {
private:
	Account * accArr[100];
	int accNum;
public:
	AccountHandler();
	void ShowMenu() const;
	void MakeAccount();
	void DepositMoney();
	void WithdrawMoney();
	void ShowAllAccInfo() const;
	~AccountHandler();
};

#endif //__BANK__
