#pragma once
#include<iostream>
#include"Employee.h"
//#include"CommissionEmployee.h"
//#include"HourlyEmployee.h"
//#include"managerEmployee.h"
//#include"SalariedEmployee.h"
class Department {
	int id;
	std::string name;
	Employee* p;
public:
	Department();
	Department(int,std:: string);
	void setId(int);
	void setName(std::string);
	int getId();
	std::string getName();
	void read();
	void print();
	void setEmployee(Employee*);
	
};
