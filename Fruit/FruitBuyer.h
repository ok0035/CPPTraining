#ifndef __BUYER__
#define __BUYER__
#include "FruitSeller.h"

class FruitBuyer
{
private:
	int APPLE_PRICE;
	int numberOfApple;
	int myMoney;
public:
	FruitBuyer(int numOfApple, int money);

	int getNumberOfApple() const;
	int getMoney() const;

	void BuyApples(FruitSeller &seller, int money);
	void showBuyResult();

	~FruitBuyer();
};

#endif // !__BUYER__

