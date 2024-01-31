#include"HourlyEmployee.h"
#include<string>
HourlyEmployee::HourlyEmployee() {	
	hoursWorked = 0;
	rate = 0;
	salary=0;
}
HourlyEmployee::HourlyEmployee(double r, double h) {
	hoursWorked = h;
	rate = r;
}
void HourlyEmployee::setRate(double rate) {
	if (rate < 0) {
		std::cout << "\nINVALID RATE IT MUST BE POSITIVE VALUE!";
		this->rate -= rate;
	}else
	this->rate += rate;
}
double HourlyEmployee::getRate() {
	return rate;
}
void HourlyEmployee::setHoursWorked(double hoursWorked) {
	if (hoursWorked < 0) {
		std::cout << "\nINVALID HOURS IT MUST BE POSITIVE...... ";
		this->hoursWorked -=hoursWorked;
	}else
	this->hoursWorked += hoursWorked;
}
double HourlyEmployee::getHoursWorked() {
	return hoursWorked;
}
void HourlyEmployee::readInput() {
	Employee::readInput();
	std::cout << "\nEnter Hours worked: ";
	std::cin >> hoursWorked;
	std::cout << "\nEnter Rate: ";
	std::cin >> rate;
}
void HourlyEmployee::addHours(int h) {
	hoursWorked += h;
}
//void HourlyEmployee::setSalary(double salary) {
//	this->salary = salary;
//}
double HourlyEmployee::getSalary() {
	return salary;
}
double HourlyEmployee::calculatePay() {
	salary = rate * hoursWorked;
	return salary;
}
std::string HourlyEmployee::displayDetails() {
	return Employee::displayDetails()+
	"\nRate: "+std::to_string(rate)+"\nHours worked: "+std::to_string(hoursWorked)+"\nSalary:"+std::to_string(salary);
}