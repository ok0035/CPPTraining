#ifndef __BANK2__
#define __BANK2__

class Account {
private:
	int accID; // °èÁÂ¹øÈ£
	int balance; // ÀÜ  ¾×
	char *cusName; //°í°´ÀÌ¸§

public:
	Account(int ID, int money, char *name);
	int GetAccID() const;
	void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo();
	~Account();

};

#endif
