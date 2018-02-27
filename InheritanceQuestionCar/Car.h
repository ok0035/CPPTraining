#ifndef __CAR__
#define __CAR__

#include <iostream>

using std::cout;
using std::endl;

class Car {
private:
	int gasolineGauge;
public:
	Car(int gauge);
	int GetGasGauge();
};

class HybridCar : public Car {

private:
	int electricGauge;
public:
	HybridCar(int gas, int elec);
	int GetElecGauge();
};

class HybridWaterCar : public HybridCar {
private:
	int waterGauge;
public:
	HybridWaterCar(int gas, int elec, int water);
	void ShowCurrentGauge();
};

#endif //__CAR__
