#include "Printer.h"
#include<iostream>
#include<cstdlib>
#include<cstring>

#define LEN		100

Printer::Printer()
{

}

void Printer::SetString(const char * str)
{
	if (this->str != NULL) delete this->str;

	this->str = new char[strlen(str)+1];
	strcpy_s(this->str, strlen(str)+1, str);
}

void Printer::ShowString()
{
	using std::cout;
	using std::endl;

	cout << str << endl;
}


Printer::~Printer()
{
	delete str;
}
