#include"Employee.h"
int count = 0;
int n = 0;
Employee::Employee(int s) {
benefit_count = s;
 name= id=jobTitle= phone= email='0';
 m_department = nullptr;
 benefit_count=0;
 benefitlist = new Benefit *[benefit_count];
}
void Employee::setName(std::string name) {
	this->name = name;
}
void Employee::setId(std::string id) {
	this->id = id;
}
void Employee::setJopTitle(std::string jobTitle) {
	this->jobTitle = jobTitle;
}
void Employee::setPhone(std::string phone) {
	this->phone = phone;
}
void Employee::setEmail(std::string email) {
	this->email = email;
}
std::string Employee::getName() {
	return name;
}
std::string Employee::getId() {
	return id;
}
std::string Employee::getJopTitle() {
	return jobTitle;
}
std::string Employee::getPhone() {
	return phone;
}
std::string Employee::getEmail() {
	return email;
}
double Employee::calTotalBenefit() {
	double m = 0;
	for (int i = 0; i < benefit_count; i++) {
		m+=benefitlist[i]->calculateBenefit();
	}
	return m;
}
//void Employee::setBenefitscount() {
//	std::cout << "Enter count of benefits: ";
//	std::cin >> benefit_size;
//}

std::string* Employee::getBenefits() {//very important
	std::string* benefits = new std::string[benefit_count];
	for (int i = 0; i < benefit_count; i++) {
		benefits[i] = benefitlist[i]->displayBenefit();
	}
	return benefits;
}

void Employee::readInput() {
	std::cout << "\n\t\t====ENTER EMPLOYEE DETATILS====";
	std::cout << "\nEnter name:";
	std::cin >> name;
	std::cout << "\nEnter Id:";
	std::cin >> id;
	std::cout << "\nEnter Jop Title:";
	std::cin >> jobTitle;
	std::cout << "\nEnter phone number:";
	std::cin >> phone;
	std::cout << "\nEnter your email account:";
	std::cin >> email;
	std::cout << "\nEnter number of benefits: ";
	std::cin >> benefit_size;
	for (int i = 0; i < benefit_size; i++) {
		std::cout << "\nEnter kind of benefit(1-Health|2-dental): ";
		std::cin >> n;
		switch (n) {
		case 1:
			benefitlist[benefit_count] = new DentalBenefit;
			break;
		case 2:
			benefitlist[benefit_count] = new HealthBenefit;
			break;
		default:
			std::cout << "\nError type";
		}
		if(n<3)
		benefitlist[i]->readData();
		benefit_count++;
	}
}

std::string Employee::displayDetails() {
	std::string benefitsString = "";
	std::string* benefitsArray = Employee::getBenefits();
	for (int i = 0; i < benefit_count; i++) {
		benefitsString += "\n\t<<Benefit " + std::to_string(i + 1) + ">> " + benefitsArray[i];
	}
	delete[] benefitsArray;
	return "\n====================EMPLOYEE INFORMATION==================\nNAME: " + name +
		"\nID: " + id + "\nJOP TITLE: " + jobTitle + "\nPHONE NUMBER: " + phone + "\nEMAIL ACCOUNT: " + email +
		((m_department != nullptr) ? "\nDept: " + m_department->getName() : "") + benefitsString+"Total benefits"+std::to_string(Employee::calTotalBenefit());
}


void Employee::setDepartment(Department* m) {
	*m_department = *m;
}
Department Employee::getDepatment() {
	return *m_department;
}
Employee::~Employee() {}