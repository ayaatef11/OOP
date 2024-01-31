#include"HR system.h"
#include<string>
using namespace std;
bool check;
HRsystem::HRsystem(int s) {
	employeeList = new Employee*[s];
	size = s;
	count = 0;
}
bool HRsystem::checkEEmpmpty() {
	if (count == 0) {
		cout << "Employee list is empty" << endl;
		return false;
	}
	return true;
}
void HRsystem::calTotalpay() {
	double pay = 0;
	for (int i = 0; i < count; i++) {
		pay+=employeeList[i]->calculatePay();
	}
	cout << pay<<endl;
}
void HRsystem::addEmployee() {
	int c = 0;//why we should initialize it
	for (int i = 0; i < size; i++) {
		system("cls");
		cout << "\t\t\t=====Employee " << i + 1 << " ======" << endl;
		std::cout << "\nEnter employee type(1-Hourly,2-salaried,3-commoission,4-manager): ";
		std::cin >> c;
		switch (c) {
		case 1:
			employeeList[count] = new HourlyEmployee();
			break;
		case 2:
			employeeList[count] = new SalariedEmployee();
			break;
		case 3:
			employeeList[count] = new CommissionEmployee();
			break;
		case 4:
			employeeList[count] = new ManagerEmployee();
			break;
		default:
			cout << "Invalid choice" << endl;

		}
		if (c < 5) {
			employeeList[count]->readInput();
			employeeList[count]->calculatePay();	
			count++;
			cout << "\n Successfully added";
		}
	}
}
void HRsystem::editEmployee() {
	if (!checkEEmpmpty())
		return;
		int id;
		std::cout << "Enter employee id to edit: ";
		std::cin >> id;
		check = false;
		for (int i = 0; i < count; i++) {
			if (std::stoi(employeeList[i]->getId()) == id) {//needs modificatio
				employeeList[i]->readInput();
				employeeList[i]->displayDetails();
				check = true;
				cout << "\n Successfully edited";
			}
		}if (check == false)
			std::cout << "Sorry! user isn't found,Try again" << endl;
	}
void HRsystem::delEmpoyee() {
	if (!checkEEmpmpty())
		return;
		int id;
		std::cout << "Enter employee id to delete: ";
		std::cin >> id;
		int s = count;
		for (int i = 0; i < count; i++) {
			if (stoi(employeeList[i]->getId()) == id) {
				employeeList[i] = employeeList[count - 1];
				employeeList[count - 1] = nullptr;
				count--;
				cout << "Successfully deleted";
			}
		}if (s == count)
			std::cout << "Employee isn't found please check the number and try again...";

	}
void HRsystem::findEmployeeById() {
	if (!checkEEmpmpty())
		return;
		int id;
		cout << "Enter employee id to search: ";
		cin >> id;
		check = false;
		for (int i = 0; i < count; i++) {
			if (stoi(employeeList[i]->getId()) == id) {
				cout << "Found at " << i + 1 << endl;
				employeeList[i]->displayDetails();
				check = true;
				cout << "\n Successfully found";
			}
		}if (check == false)
			cout << "Can't find the user of this id,Try again!";
	}
void HRsystem::findEmployeeByName() {
	if (!checkEEmpmpty())
		return;
		check = false;
		string name;
		cin >> name;
		for (int i = 0; i < count; i++) {
			if (employeeList[i]->getName() == name) {
				cout << "Found at " << i + 1 << endl;
				employeeList[i]->displayDetails();
				check = true;
				cout << "\nSuccessfully found";
			}
		}if (check == false) {
			cout << "Employee not found" << endl;
		}
	}
void HRsystem::findEmployeeByjopTitle() {
	if (!checkEEmpmpty())
		return;
	check = false;
	string title;
	cout << "\n jop title: ";
	cin >> title;
	for (int i = 0; i < count; i++) {
		if (employeeList[i]->getJopTitle() == title) {
			employeeList[i]->displayDetails();
			check = true;
			cout << "\nSuccessfully Found";
		}
	}if (check == false)
		cout << "Not found for this jop title" << endl;
}
void HRsystem::calTotalSystemBenefit() {
	double sum = 0;
	for (int i = 0; i < count; i++) {
		sum+=employeeList[i]->calTotalBenefit();
	}
	cout << sum;
}
void HRsystem::searchBybenefit() {
	double amounts;
	cout << "Enter benefit amount"<<endl;
	cin >> amounts;
	for (int i = 0; i < count; i++) {
		if (employeeList[i]->calTotalBenefit() == amounts) {
			cout << "Found at place " << i + 1 << endl;
			employeeList[i]->displayDetails();
			check = true;
		}
	}if (check == false) {
		cout << "\nNot found ^_^";
	}
}
void HRsystem::show() {
	if (!checkEEmpmpty())
		return;
		cout << "\t\t\t<<EMPLOYEE LIST>>" << endl;
		for (int i = 0; i < count; i++) {
			cout << employeeList[i]->displayDetails();
		}
}
bool HRsystem::assignDepartmentToEmployeeId(int emp_id, Department*d) {
	int emp_idx = findById(emp_id);
	if (emp_idx == -1)return false;
	Employee* p = employeeList[emp_idx];
	p->setDepartment(d);
	return true;
}
int HRsystem::findById(int i) {
	for (int i = 0; i < count; i++) {
		if (stoi(employeeList[i]->getId()) == i)
			return i;
	}
	return -1;
}
HRsystem::~HRsystem() {
	for (int i = 0; i < count; i++) {
		delete employeeList[i];
	}
	delete[]employeeList;
}