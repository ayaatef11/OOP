#include"DepartmentList.h"
using namespace std;
DepartmentList::DepartmentList() {

}

DepartmentList::DepartmentList(int s){
	departmentList = new Department[s];
	depart_size=s;
	depart_count=0;
}
void DepartmentList::addDepartment() {
	for (int i = 0; i < depart_size; i++) {
		Department* d = new Department();
		cout << "\n==Enter Department " << i + 1 << " details== " << endl;
		d->read();
		departmentList[depart_count++] = *d;
	}
}
int DepartmentList::findbyid(int j) {
	for (int i = 0; i < depart_count; i++) {
		if (departmentList[i].getId() == j) {
			return i;
		}
	}return -1;
}
void DepartmentList::delDepartment() {
	int id;
	bool check = false;
	if (depart_count == 0) {
		cout << "Department  list is empty" << endl;
	}
	else {
		cout << "\nEnter department id to delete: ";
		cin >> id;
		for (int i = 0; i < depart_count; i++) {
			if (departmentList[i].getId() == id) {
				departmentList[i] = departmentList[depart_count - 1];
				depart_count--;
				check = true;
			}
		}
		if (check == false) {
			cout << "THis department isn't found,Check id!" << endl;
		}
	}
}
void DepartmentList::searchDepartment() {
	if (depart_count == 0) {
		cout << "Department list is empty" << endl;
	}
	else {
		bool check = false;
		int id = -1;
		cout << "\nEnter Departmrnt id to search:" << endl;
		cin >> id;
		for (int i = 0; i < depart_count; i++) {
			if (departmentList[i].getId() == id) {
				cout << "Department found at place " << i + 1 << endl;
				departmentList[i].print();
				check = true;
			}
		}if (check == false) {
			cout << "Department name isn't found in this list" << endl;
		}
	}
}
int DepartmentList::searchDeptByid() {
	if (depart_count == 0) {
		cout << "Department list is empty" << endl;
		return -1;
	}
	else {
		int id = -1;
		cout << "\nPlease enter department id: ";
		cin >> id;
		for (int i = 0; i < depart_count; i++) {
			if (departmentList[i].getId() == id)
				return i;
		}
		return -1;
	}
}
void DepartmentList::editDepartment() {
	int i = searchDeptByid();
	if (i == -1)
		return;
	else {
		departmentList[i].read();
		cout << "\n***** Department after updating *****" << endl;
		departmentList[i].print();
	}

}
void DepartmentList::displayDdepartment() {
	if (depart_count == 0) {
		cout << "Department List is empty ";
	}
	else {
		for (int i = 0; i < depart_count; i++) {
			departmentList[i].print();
		}
	}
}
/*bool DepartmentList::assignEmployeeToDepartment(int id) {//still not completed
	int index = searchDeptByid();
	if (index == -1)return false;
	i = findById();
	employee* d = employeeList[i];
	d->getName();

}*/
bool DepartmentList::assignEmployeeToDepartment(int i, Employee* employee) {
	int idx = findbyid(i);
	if (idx == -1) {
		cout << "Department isn't found" << endl;
		return false;
	}
	Department p = departmentList[idx];
	p.setEmployee(employee);
	cout << "Assigned successfully" << endl;
	return true;
}
 DepartmentList:: ~DepartmentList() {
	 delete[]departmentList;
 }

