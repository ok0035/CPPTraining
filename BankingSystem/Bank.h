#ifndef __BANK__
#define __BANK__

#define NAME_LEN	20

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

#endif //__BANK__
