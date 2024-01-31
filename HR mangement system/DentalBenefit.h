#pragma once
#include"Benefit.h"
class DentalBenefit : public Benefit {
	std::string info;
public:
	void setInfo(std::string i);
	std::string getInfo();
	 void readData();
	 double calculateBenefit();
	 std::string displayBenefit();
	//std::string getDetails();
};
