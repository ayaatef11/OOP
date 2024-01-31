#pragma once
#include"Department.h"
#include"Employee.h"
#include"HR system.h"
class DepartmentList {
public:
	Department* departmentList;
	int depart_size;
	int depart_count;
	
public:
	DepartmentList();
	DepartmentList(int=3);
	void addDepartment();
	int findbyid(int );
	void delDepartment();
	void searchDepartment();
	int searchDeptByid();
	void editDepartment();
	void displayDdepartment();
	bool assignEmployeeToDepartment(int i,Employee*);
	//void setEmployee(Employee*);
	virtual ~DepartmentList();
};
