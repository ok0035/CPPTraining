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
	if (str != NULL) delete this->str;
	int cnt = 0;
	while (str[cnt] != '\0') cnt++;

	this->str = new char[cnt+1];
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
