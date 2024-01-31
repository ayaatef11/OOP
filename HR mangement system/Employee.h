#pragma once
#include<iostream>
#include"Department.h"
//#include"Benefit.h"
#include"HealthBenefit.h"
#include"DentalBenefit.h"
class Employee {
protected:
	std::string name;
    std::string id;
	std::string jobTitle;
	std::string phone;
	std::string email;
	Department* m_department;
	Benefit**benefitlist;
	int benefit_count;
    int benefit_size;
public:
	Employee(int=2);
	void setName(std::string);
	void setId(std::string);
	void setJopTitle(std::string);
	void setPhone(std::string);
	void setEmail(std::string);
	std::string getName();
	std::string getId();
	std::string getJopTitle();
	std::string getPhone();
	std::string getEmail();
	double calTotalBenefit();
	//void setBenefitscount();
	std::string* getBenefits();
	virtual void readInput();
	virtual  std::string displayDetails();
	//virtual void setSalary(double) = 0;
	virtual double  getSalary()=0;
	virtual double calculatePay()=0;
	void setDepartment(Department*);
	Department getDepatment();
	virtual ~Employee();
};
