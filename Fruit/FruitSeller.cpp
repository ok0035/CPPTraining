#include "FruitSeller.h"
#include<iostream>

FruitSeller::FruitSeller(int price, int numOfApple, int money)
{
	this->APPLE_PRICE = price;
	this->myMoney = money;
	this->numberOfApple = numOfApple;
}

int FruitSeller::getNumberOfApple() const
{
	return this->numberOfApple;
}

int FruitSeller::getMoney() const
{
	return this->myMoney;
}

int FruitSeller::getPrice() const
{
	return this->APPLE_PRICE;
}

int FruitSeller::SaleApples(int money)
{
	using std::cout;
	using std::endl;

	int saleNum = money / APPLE_PRICE;
	if (saleNum < 1) {
		cout << "돈이 부족하잖아요!!" << endl;
		return 0;
	}
	else if (numberOfApple <= 0) {
		cout << "죄송합니다. 사과가 다 나갔네요ㅜ" << endl;
		return 0;
	}
	myMoney += money;
	cout << "여기 있습니다~^^" << endl;
	numberOfApple -= saleNum;
	return saleNum;
}

void FruitSeller::showSalesResult()
{
	using std::cout;
	using std::endl;

	cout << "현재 잔액 : " << myMoney << endl;
	cout << "사과 갯수 : " << numberOfApple << endl;
}


FruitSeller::~FruitSeller()
{
}
