#include "FruitBuyer.h"
#include "FruitSeller.h"
#include <iostream>


FruitBuyer::FruitBuyer(int numOfApple, int money)
{
	this->numberOfApple = numOfApple;
	this->myMoney = money;
}

int FruitBuyer::getNumberOfApple() const
{
	return this->numberOfApple;
}

int FruitBuyer::getMoney() const
{
	return myMoney;
}

void FruitBuyer::BuyApples(FruitSeller &seller, int money)
{
	using std::cout;
	using std::endl;

	cout << "���� ��� �� ��Կ�." << endl;

	int numOfBuyingApple = seller.SaleApples(money);
	if (numOfBuyingApple <= 0) {
		cout << "��~ ������ �ٽ� �ðԿ�~" << endl;
		return;
	}
	this->myMoney -= money;
	this->numberOfApple += numOfBuyingApple;

	if (numOfBuyingApple != 0) {
		cout << "��� " << numOfBuyingApple << "���� �����߽��ϴ�." << endl;
		cout << "�� �����Կ�~ �ȳ��� �輼��." << endl;
	}

}

void FruitBuyer::showBuyResult()
{
	using std::cout;
	using std::endl;

	cout << "���� �ܾ� : " << myMoney << "��" << endl;
	cout << "��� ���� : " << numberOfApple << "��" << endl;
}


FruitBuyer::~FruitBuyer()
{
}
