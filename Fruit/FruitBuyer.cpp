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

	cout << "여기 사과 좀 살게요." << endl;

	int numOfBuyingApple = seller.SaleApples(money);
	if (numOfBuyingApple <= 0) {
		cout << "아~ 다음에 다시 올게요~" << endl;
		return;
	}
	this->myMoney -= money;
	this->numberOfApple += numOfBuyingApple;

	if (numOfBuyingApple != 0) {
		cout << "사과 " << numOfBuyingApple << "개를 구입했습니다." << endl;
		cout << "잘 먹을게요~ 안녕히 계세요." << endl;
	}

}

void FruitBuyer::showBuyResult()
{
	using std::cout;
	using std::endl;

	cout << "현재 잔액 : " << myMoney << "원" << endl;
	cout << "사과 갯수 : " << numberOfApple << "개" << endl;
}


FruitBuyer::~FruitBuyer()
{
}
