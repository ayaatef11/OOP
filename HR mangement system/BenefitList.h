#pragma once
#include"Benefit.h"
#include"DentalBenefit.h"
#include"HealthBenefit.h"
class BenefitList {
	Benefit **benefitList;
	int benefit_size;
	int benefit_count;
public:
	BenefitList(int =2);
	void addBenefit();
	void deleteBenefit();
	void editBenefit();
	void displayBenefit();
	~BenefitList();
};
