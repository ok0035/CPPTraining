#include<iostream>
#include "Printer.h"

int main() {
	
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I Love C++");
	pnt.ShowString();

	return 0;
}