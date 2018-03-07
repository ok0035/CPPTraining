#include "Employee.h"
#include<iostream>

using std::cout;
using std::endl;

Employee::Employee(const char * name)
{
	strcpy_s(this->name, strlen(name) + 1, name);
}

void Employee::ShowYourName() const
{
	cout << "name : " << name << endl;
}

PermanentWorker::PermanentWorker(const char * name, int money)
	: Employee(name), salary(money)
{

}

int PermanentWorker::GetPay() const
{
	return this->salary;
}

void PermanentWorker::ShowSalaryInfo() const
{
	ShowYourName();
	cout << "salary : " << GetPay() << endl << endl;
}

EmployeeHandler::EmployeeHandler()
	: empNum(0)
{
}

void EmployeeHandler::AddEmployee(Employee * emp)
{
	empList[empNum++] = emp;
}

void EmployeeHandler::ShowAllSalaryInfo() const
{
	/*
	for(int i=0; i< empNum; i++) {
	
		sum+=empList[i]->ShowSalaryInfo();
	}
	*/
}

void EmployeeHandler::ShowTotalSalary() const
{
	int sum = 0;
	/*
	for(int i=0; i<empNum; i++) {
	sum += empList[i]->GetPay();
	}
	*/
	cout << "salary sum: " << sum << endl;
}

EmployeeHandler::~EmployeeHandler()
{
	for (int i = 0; i < empNum; i++) {
		delete empList[i];
	}
}

TemporaryWorker::TemporaryWorker(const char * name, int pay)
	: Employee(name), workTime(0), payPerHour(pay)
{

}

void TemporaryWorker::AddWorkTime(int time)
{
	workTime += time;
}

int TemporaryWorker::GetPay() const
{
	return workTime*payPerHour;
}

void TemporaryWorker::ShowSalaryInfo() const
{
	ShowYourName();
	cout << "salary: " << GetPay() << endl << endl;
}

SalesWorker::SalesWorker(const char * name, int money, double ratio)
	: PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
{
}

void SalesWorker::AddSalesResult(int value)
{
	salesResult += value;
}

int SalesWorker::GetPay() const
{
	return PermanentWorker::GetPay() // PermanentWorker의 GetPay 함수 호출 
		+ (int)(salesResult * bonusRatio);
}

void SalesWorker::ShowSalaryInfo() const
{
	ShowYourName();
	cout << "salary: " << GetPay() << endl << endl;
}
