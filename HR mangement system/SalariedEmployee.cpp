#include"SalariedEmployee.h"
#include<string>
SalariedEmployee::SalariedEmployee() {
	salary = 0;
}
SalariedEmployee::SalariedEmployee(double s) {
	salary = s;
}
double SalariedEmployee::calculatePay() {
	return salary;
}
void SalariedEmployee::setSalary(double salary) {
	if (salary < 0) {
		std::cout << "\nINVALID SALARY";
		this->salary -= salary;
	}
	else
	this->salary += salary;
}
double SalariedEmployee::getSalary() {
	return salary;
}
std::string SalariedEmployee::displayDetails() {
	return  Employee::displayDetails() +
		"\nSALARY: " + std::to_string(salary);
}
void SalariedEmployee::readInput(){
	Employee::readInput();
	std::cout << "\nEnter Salary: ";
	std::cin >> salary;
	
}
SalariedEmployee:: ~SalariedEmployee() {}