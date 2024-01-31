#include"DentalBenefit.h"
void DentalBenefit::setInfo(std::string i) {
	info = i;
}
std::string DentalBenefit::getInfo() {
	return info;
}
void DentalBenefit::readData() {
	Benefit::readData();
	std::cout << "\nEnter information: ";
	std::cin >> info;
}
double DentalBenefit::calculateBenefit() {
	b= 0.01 * amount;
	return b;
}
std::string DentalBenefit::displayBenefit() {
	return Benefit::displayBenefit() + "\ninformation: " + info+"\nBenefit: "+std::to_string(b);
}
//std::string DentalBenefit::getDetails() {}