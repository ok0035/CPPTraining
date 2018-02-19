#include "Calculator.h"
#include<iostream>

float Calculator::Add(float num1, float num2)
{
	result = num1 + num2;
	addCount++;
	return result;
}

float Calculator::Div(float num1, float num2)
{
	result = num1 / num2;
	divCount++;
	return result;
}

float Calculator::Min(float num1, float num2)
{
	result = num1 - num2;
	minCount++;
	return result;
}

float Calculator::Mul(float num1, float num2)
{
	result = num1 * num2;
	mulCount++;
	return result;
}

void Calculator::ShowOpCount()
{
	using std::cout;
	using std::endl;

	cout << "µ¡¼À : " << addCount << "»¬¼À : " << minCount << "°ö¼À : " << mulCount << "³ª´°¼À : " << divCount << endl;
}

Calculator::Calculator()
{
	addCount = 0;
	minCount = 0;
	divCount = 0;
	mulCount = 0;
}


Calculator::~Calculator()
{
}
