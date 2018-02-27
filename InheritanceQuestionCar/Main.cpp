#include <iostream>
#include "Car.h"

using std::cout;
using std::endl;

int main() {

	Car *car = new Car(50000);
	HybridCar *hybridCar = new HybridCar(25000, 25000);
	HybridWaterCar *hybridWaterCar = new HybridWaterCar(10000, 20000, 20000);

	cout << "Car Info" << endl;
	cout << "Gasoline Gauge : " << car->GetGasGauge() << endl << endl;

	cout << "HybridCar Info" << endl;
	cout << "Gasoline Gauge : " << hybridCar->GetGasGauge() << endl;
	cout << "Electric Gauge : " << hybridCar->GetElecGauge() << endl << endl;

	cout << "HybridWaterCar Info" << endl;
	hybridWaterCar->ShowCurrentGauge();
	cout << endl;

	delete car;
	delete hybridCar;
	delete hybridWaterCar;

	return 0;

}