#include"managerEmployee.h"
#include<string>
ManagerEmployee::ManagerEmployee() {
	 bonus =salary = 0;
}
ManagerEmployee::ManagerEmployee(double b,double s) {
	bonus = b;
	salary = s;
}
void ManagerEmployee::addBonus(double bonus) {
	if (bonus < 0) {
		std::cout << "\nINVBALID BONUS IT MUST BE POSITIVE VALUE";
		this->bonus -=bonus;
	}else
	this->bonus += bonus;
	salary += bonus;
}
double ManagerEmployee::getSalary() {
	return salary;
}

std::string ManagerEmployee::displayDetails() {
	return Employee::displayDetails()+"\nBonus: "+std::to_string(bonus)+"\nTotal Salary: "+std::to_string(salary);
}

void ManagerEmployee::setSalary(double salary) {
	this->salary = salary;
}

double ManagerEmployee::calculatePay() {	
	return salary+bonus;
}
void ManagerEmployee::readInput() {
	//SalariedEmployee::readInput();
     Employee::readInput();
	std::cout << "\nEnter salary:";
	std::cin >> salary;
	std::cout << "\nEnter bonus: ";
	std::cin >> bonus;
	salary += bonus;
}