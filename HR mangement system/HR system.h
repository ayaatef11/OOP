#pragma once
#include"Employee.h"
#include"CommissionEmployee.h"
#include"HourlyEmployee.h"
#include"managerEmployee.h"
#include"SalariedEmployee.h"
class HRsystem {
	Employee **employeeList;
	int count;
	int size;
public:
	HRsystem(int =5);
	bool checkEEmpmpty();
	void calTotalpay();
	void addEmployee();
	void editEmployee();
	void delEmpoyee();
	void findEmployeeById();
	void findEmployeeByName();
	void findEmployeeByjopTitle();
	void calTotalSystemBenefit();
	void searchBybenefit();
	void show();
	bool assignDepartmentToEmployeeId(int, Department*);
	int findById(int);
	virtual ~HRsystem();
};
