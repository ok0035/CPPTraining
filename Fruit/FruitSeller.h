#ifndef __SELLER__
#define __SELLER__

class FruitSeller
{

private:
	int APPLE_PRICE;
	int numberOfApple;
	int myMoney;
public:

	FruitSeller(int price, int numOfApple, int money);

	int getNumberOfApple() const;
	int getMoney() const;
	int getPrice() const;

	int SaleApples(int money);
	void showSalesResult();

	~FruitSeller();
};

#endif

