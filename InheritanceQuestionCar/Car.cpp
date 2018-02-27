#include "Car.h"

Car::Car(int gauge)
{
	gasolineGauge = gauge;
}

int Car::GetGasGauge()
{
	return gasolineGauge;
}

HybridCar::HybridCar(int gas, int elec)
	: Car(gas)
{
	electricGauge = elec;
}

int HybridCar::GetElecGauge()
{
	return electricGauge;
}

HybridWaterCar::HybridWaterCar(int gas, int elec, int water)
	: HybridCar(gas, elec)
{
	waterGauge = water;
}

void HybridWaterCar::ShowCurrentGauge()
{
	cout << "�ܿ� ���ָ� : " << GetGasGauge() << endl;
	cout << "�ܿ� ���ⷮ : " << GetElecGauge() << endl;
	cout << "�ܿ� ���ͷ� : " << waterGauge << endl;
}
