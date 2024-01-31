#pragma once
#include"SalariedEmployee.h"
class ManagerEmployee:public SalariedEmployee {
	double bonus = 0;
	double salary=0;
public:
	ManagerEmployee();
	ManagerEmployee(double,double);
	void addBonus(double);
	double getSalary();
	double calculatePay();
	std::string displayDetails();
	void readInput();
	void setSalary(double);
};
