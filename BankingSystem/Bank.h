#ifndef __BANK__
#define __BANK__

#define NAME_LEN	20

/*
클래스 이름 : Account
클래스 유형 : Entity 클래스
*/

class Account {

private: 
	int accID; // 계좌번호
	int balance; // 잔액
	char * cusName; // 고객이름

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
 클래스 이름 : AccountHandler
 클래스 유형 : 컨트롤(Control) 클래스
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
