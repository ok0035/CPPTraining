#include "Encapsulation.h"
#include <iostream>

using std::cout;
using std::endl;

Point::Point(int x, int y)
{
	xpos = x;
	ypos = y;
}

void Point::ShowPointInfo() const
{
	cout << "[" << xpos << ", " << ypos << "]" << endl;
}

Circle::Circle(int x, int y, int r)
{
	this->xpos = x;
	this->ypos = y;
	this->radius = r;
}

int Circle::getXpos() const
{
	return this->xpos;
}

int Circle::getYpos() const
{
	return this->ypos;
}

int Circle::getRadius() const
{
	return this->radius;
}

Ring::Ring(int ix, int iy, int ic, int ox, int oy, int oc)
{
	this->inx = ix;
	this->iny = iy;
	this->inr = ic;
	
	this->outx = ox;
	this->outy = oy;
	this->outr = oc;
}

void Ring::ShowRingInfo() const
{
	cout << "Inner Circle Info" << endl;
	cout << "radius : " << inr << endl;
	cout << "[" << inx << ", " << iny << "]" << endl;
	cout << endl;
	
	cout << "Outter Circle Info" << endl;
	cout << "radius : " << outr << endl;;
	cout << "[" << outx << ", " << outy << "]" << endl;

}
