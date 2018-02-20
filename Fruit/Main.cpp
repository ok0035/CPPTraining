#include<iostream>
#include "FruitBuyer.h"
#include "FruitSeller.h"

using std::cout;
using std::endl;

int main() {

	FruitBuyer * buyer = new FruitBuyer(0, 10000);
	FruitSeller * seller = new FruitSeller(1000, 100, 0);

	buyer->BuyApples(*seller, 5000);

	buyer->showBuyResult();
	seller->showSalesResult();

	return 0;
}