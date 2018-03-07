#ifndef __EMPLOYEE__
#define __EMPLOYEE__

class Employee {
private:
	char name[100];

public:
	Employee(const char *name);

	void ShowYourName() const;
};

class PermanentWorker : public Employee {
	
private:
	int salary;
public:
	PermanentWorker(const char *name, int money);

	int GetPay() const;
	void ShowSalaryInfo() const;

};

class EmployeeHandler {
private:
	Employee * empList[50];
	int empNum;

public:
	EmployeeHandler();

	void AddEmployee(Employee* emp);
	void ShowAllSalaryInfo() const;
	void ShowTotalSalary() const;

	~EmployeeHandler();

};

class TemporaryWorker : public Employee {
private:
	int workTime;
	int payPerHour;

public:
	TemporaryWorker(const char * name, int pay);
	void AddWorkTime(int time);
	int GetPay() const;
	void ShowSalaryInfo() const;

};

class SalesWorker : public PermanentWorker {

private:
	int salesResult; // 월 판매실적
	double bonusRatio; // 상여금 비율

public:
	SalesWorker(const char * name, int money, double ratio);
	void AddSalesResult(int value);
	int GetPay() const;
	void ShowSalaryInfo() const;
};

#endif //__EMPLOYEE__
