#pragma once
#include"Benefit.h"
class HealthBenefit:public Benefit {
	std::string info;
	std::string coverage;
public:
	//HealthBenefit();
	void setInfo(std::string);
	std::string getInfo();
	void setCoverage(std::string);
	std::string getCoverage();
	void readData();
	double calculateBenefit();
	std::string displayBenefit();
	//string getDetails();
};
