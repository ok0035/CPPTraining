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
		cout << "���� �������ݾƿ�!!" << endl;
		return 0;
	}
	else if (numberOfApple <= 0) {
		cout << "�˼��մϴ�. ����� �� �����׿��" << endl;
		return 0;
	}
	myMoney += money;
	cout << "���� �ֽ��ϴ�~^^" << endl;
	numberOfApple -= saleNum;
	return saleNum;
}

void FruitSeller::showSalesResult()
{
	using std::cout;
	using std::endl;

	cout << "���� �ܾ� : " << myMoney << endl;
	cout << "��� ���� : " << numberOfApple << endl;
}


FruitSeller::~FruitSeller()
{
}
