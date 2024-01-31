#pragma once
#include"Employee.h"
class SalariedEmployee:public Employee {
protected:
	double salary;
public:
	SalariedEmployee();
	SalariedEmployee(double);
	void setSalary(double);
	double getSalary();
	 double calculatePay();
	 std::string displayDetails();
	 void readInput();
	 virtual ~SalariedEmployee();
};
