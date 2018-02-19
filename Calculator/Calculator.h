#pragma once
#ifndef __CALCULATOR__
#define __CALCULATOR__

class Calculator
{

private:

	float result;
	int addCount, minCount, divCount, mulCount;
	

public:

	Calculator();
	~Calculator();

	float Add(float num1, float num2);
	float Div(float num1, float num2);
	float Min(float num1, float num2);
	float Mul(float num1, float num2);
	void ShowOpCount();

};

#endif