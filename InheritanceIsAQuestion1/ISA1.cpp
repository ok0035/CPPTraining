#include "ISA1.h"
#include<iostream>

using std::cout;
using std::endl;

Rectangle::Rectangle(int w, int h)
{
	this->width = w;
	this->height = h;
	this->area = width * height;
}

void Rectangle::ShowAreaInfo()
{
	cout << "¸éÀû : " << area << endl;
}

Square::Square(int length)
	: Rectangle(length, length)
{
}
