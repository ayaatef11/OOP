#pragma once
#include"Employee.h"
class CommissionEmployee:public Employee {
protected:
	double target;
	double rate;
	//double salary ;
public:
	CommissionEmployee();
	CommissionEmployee(double,double);
	//������� ��� ����������� ����� ������ ��
	void setTarget(double target);
	double getTarget();
	void setRate(double);
	double getRate();
	std::string displayDetails();
	 double calculatePay();
	 double getSalary();
	 //void setSalary(double);
	 void readInput();

};
