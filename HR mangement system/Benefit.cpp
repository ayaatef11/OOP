#include"Benefit.h"
using namespace std;
Benefit::Benefit() {
	amount = 0;
	b = 0;
}
void Benefit::setPlanType(std::string planType) {
	this->planType = planType;
}
void Benefit::setAmount(double amount) {
	this->amount = amount;
}
std::string Benefit::getPlanType() {
	return planType;
}
double Benefit::getAmount(){
	return amount;
}
void Benefit::readData() {
	cout << "\nEnter plan Type: ";
	cin >> planType;
	cout << "\nEnter amount: ";
	cin >> amount;
}
string Benefit::displayBenefit() {
	return "\nPlan type :" + planType + "\nAmount: " +to_string( amount);
}