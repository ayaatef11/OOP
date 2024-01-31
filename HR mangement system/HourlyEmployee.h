#pragma once
#include"Employee.h"
class HourlyEmployee:public Employee{
	double hoursWorked=0;
	double rate=0;
	double salary=0;
public:
	HourlyEmployee();
	HourlyEmployee(double,double);
	void setRate(double);
	double getRate();
	void setHoursWorked(double);
	double getHoursWorked();
	void readInput();
	void addHours(int);
	//void setSalary(double);
	double  getSalary();//needs modification
	std::string displayDetails();
	double calculatePay();
};
