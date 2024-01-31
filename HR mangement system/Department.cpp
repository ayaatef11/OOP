#include"Department.h"
Department::Department() {
	id = 0;
	name = '0';
	p = nullptr;
}
Department::Department(int id, std::string name)  {
	this->id = id;
	this->name = name;
}
void Department::setId(int id) {
	this->id = id;
}
void Department::setName(std::string name) {
	this->name = name;
}
int Department::getId() {
	return id;
}
std::string Department::getName() {
	return name;
}
void  Department::read() {
	std::cout << "\nEnter Department Name: ";
	std::cin >> name;
	std::cout << "\nEnter Department Id: ";
	std::cin >> id;
}
void Department::print() {
	std::cout << "\n\t\t\t======DEPARTMENT DETAILS=======";
	std::cout << "\nDepartment name : " << name;
	std::cout << "\nDepartment id : " << id;

}
void Department::setEmployee(Employee*d) {
	p = d;
}
