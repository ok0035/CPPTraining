#ifndef __BANK2__
#define __BANK2__

class Account {
private:
	int accID; // ���¹�ȣ
	int balance; // ��  ��
	char *cusName; //���̸�

public:
	Account(int ID, int money, char *name);
	int GetAccID() const;
	void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo();
	~Account();

};

#endif
