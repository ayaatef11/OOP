#include"CommissionEmployee.h"
#include<string>
CommissionEmployee::CommissionEmployee() {
	target = 0;
	//salary = 0;
	rate = 0;
}
CommissionEmployee::CommissionEmployee(double t, double r) {
	target = t;
	rate = r;
}
void CommissionEmployee::setTarget(double target) {
	if (target < 0) {
		std::cout << "\nINVAlID";
		this->target = -target;
	}
	else
	this->target = target;
}
double CommissionEmployee::getTarget() {
	return target;
}
void CommissionEmployee::setRate(double rate) {
	if (rate < 0)
		std::cout <<"\nINVALID";
	else
	this->rate = rate;
}
double CommissionEmployee::getRate(){
	return rate;
}
std::string CommissionEmployee::displayDetails() {
	return  Employee::displayDetails()+"\nRate: "+std::to_string(rate)+"\nTarget: "+std::to_string(target)+"\nTotal Salary: "+std::to_string(target*rate);
}

double CommissionEmployee::calculatePay() {
	return target * rate;
}
double CommissionEmployee::getSalary() {
	return target* rate;
}
//void  CommissionEmployee::setSalary(double salary) {
//	this->salary = salary;
//}
void CommissionEmployee::readInput() {
	Employee::readInput();
	std::cout << "\nEnter Target: ";
	std::cin >> target;
	std::cout << "\nENter rate: ";
	std::cin >> rate;
}