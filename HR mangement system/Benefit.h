#pragma once
#include<iostream>
#include<string>
class Benefit {
protected:
	double b;
	std::string planType;//such as basic,platinum,gold
	double amount;
public:
	Benefit();
	void setPlanType(std::string);
	void setAmount(double);
	std::string getPlanType();
	double getAmount();
	virtual void readData();
	virtual double calculateBenefit()=0;
	virtual std::string displayBenefit();
};
