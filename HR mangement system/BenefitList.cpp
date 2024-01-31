#include"BenefitList.h"
#include<iostream>
using namespace std;

BenefitList::BenefitList(int s) {
	benefitList = new Benefit*[s];
	 benefit_size=s;
	 benefit_count=0;
}
void BenefitList::addBenefit() {
	int n=0;
	for (int i = 0; i < benefit_size; i++) {
		cout << "\nEnter Type of benefit(1-Health|2-Dental): ";
		cin >> n;
		switch (n) {
		case 1:
			benefitList[benefit_count] = new HealthBenefit();//i must include healthbenefit.h and dental benefit.hc
			break;
		case 2:
			benefitList[benefit_count] = new DentalBenefit();
			break;
		default:
			cout << "\nInvalid choice^-^";
		}if (n < 3) {
			benefitList[benefit_count]->readData();
			benefitList[benefit_count]->calculateBenefit();
			benefit_count++;
			cout << "\nSuccessfully added";
		}

	}

}
void BenefitList::deleteBenefit() {
	if (benefit_count == 0) {
		cout << "\nEmpty list of benefits";
		return;
	}
	bool check = false;
	string s;
	cout << "\nEnter Benefit plan type to delete:";
	cin >> s;
	for (int i = 0; i < benefit_count; i++) {
		if (benefitList[i]->getPlanType() == s) {
			benefitList[i] = benefitList[benefit_count - 1];
			benefitList[benefit_count - 1] = NULL;
			benefit_count--;
			check = true;
			cout << "\nSuccessfully deleted";
		}
	}if (check == false)
		cout << "\nCan't find the benefit you search for";
}
void BenefitList::editBenefit() {
	if (benefit_count == 0) {
		cout << "Empty list of benefits";
		return;
	}
	string s;
	bool check = false;
	cout << "Enter benefit plan type: ";
	cin >> s;
	for (int i = 0; i < benefit_count; i++) {
		if (benefitList[i]->getPlanType() == s) {
			benefitList[i]->readData();
			cout << "Edited successully$";
			check = true;
			cout << "\nSuccessfully edited";
		}
	}if (check == false)
		cout << "\nNot found:)";
}
void  BenefitList::displayBenefit() {
	if (benefit_count == 0) {
		cout << "Empty list of benefits";
		return;
	}
	for (int i = 0; i < benefit_count; i++) {
		cout << "====BENEFIT" << i + 1 << "======" << endl;
		cout<<benefitList[i]->displayBenefit();
	}
}
BenefitList::~BenefitList() {
	delete[]benefitList;
}