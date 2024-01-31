#include"HealthBenefit.h"
void HealthBenefit::setInfo(std::string i) {
	info = i;
}
std::string HealthBenefit::getInfo() {
	return info;
}
void HealthBenefit::setCoverage(std::string c) {
	coverage = c;
}
std::string HealthBenefit::getCoverage() {
	return coverage;
}
void HealthBenefit::readData() {
	Benefit::readData();
	std::cout << "\nEnter coverage :";
	std::cin >> coverage;
	std::cout << "\nEnter information: ";
	std::cin >> info;
}
double HealthBenefit::calculateBenefit() {
	b = 0.02 * amount;
	return b;
}

std::string HealthBenefit::displayBenefit() {
	return Benefit::displayBenefit() + "\ncoverage: " + coverage + "\nInfo: " + info+"\nBenefit: "+std::to_string(b);
}