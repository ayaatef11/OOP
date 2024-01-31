#include"Functions.h"
#include<iostream>
#include <iostream>
#include"CommissionEmployee.h"
#include"HourlyEmployee.h"
#include"SalariedEmployee.h"
#include"managerEmployee.h"
#include"HR system.h"
#include"Benefit.h"
#include"DentalBenefit.h"
#include"HealthBenefit.h"
#include<windows.h>
#include<cstdlib>
#include"Department.h"
#include"DepartmentList.h"
#include"BenefitList.h"
using namespace std;
char ch;
int c =1;
int id=0,i=0;
Department d[6];
DepartmentList depart_list(1);
Department depart(12, "it");
HRsystem s(1);
BenefitList benefit_list;
void functions::printline(string s, bool el ) {
	cout << s << (el ? "\n" : "\t");
}
    void functions::handle_HRsystem() {
	while (c != 0) {
		system("cls");
		printline("\n#HR system");
		printline("1.Add employee\n2.Delete employee\n3.Edit employee\n4.Return to main menu\n5.Assign employee to department\n6.assign department to employee\nEnter selection:");
		cin >> c;
		switch (c) {
		case 1:
			printline("Add employee...");
			s.addEmployee();
			break;
		case 2:
			printline("Delete employee...");
			s.delEmpoyee();
			break;
		case 3:
			printline("Edit employee...");
			s.editEmployee();
			break;
		case 4:
			printline("Return to main menu...");
			return;
		case 5:
			printline("Assign department to employee....");
			cout << "Enter employee id: ";
			cin >> id;
			s.assignDepartmentToEmployeeId(id, &depart);
			break;
		default:
			printline("Invalid choice,Try again!");

		}
			  Sleep(3000);
		}

	}
	void functions::handle_benefits() {
		while (c != 0) {
			system("cls");
			printline("\n#Benefits file");
			printline("1.Add benefits\n2.Delete benefits\n3.Edit benefits\n4.return to main");
			cin >> c;
			switch (c) {
			case 1:
				printline("Add benefits...");
				benefit_list.addBenefit();
				break;
			case 2:
				printline("Delete benefits...");
				benefit_list.deleteBenefit();
				break;
			case 3:
				printline("Edit benefits...");
				benefit_list.editBenefit();
				break;
			case 4:
				printline("Return to main menu...");
				return;
			default:
				printline("Invalid choice,Try again!");
			}
			Sleep(3000);
		}
	}
	void functions::handle_reporting() {
		while (c != 0) {
			system("cls");
			printline("#Reporting System");
			printline("1.Department list\n2.Employee list\n3.Benefit list\n4.Display Salary\n5.Return to main menue\n***Enter Selection:");
			cin >> ch;
			switch (ch) {
			case '1': {
				printline("1.Display all\n2.Display a specific one\n***Enter choice");
				cin >> ch;
				switch (ch) {
				case '1':
					depart_list.displayDdepartment();
					break;
				case '2':
					depart_list.searchDepartment();
				}
			}break;
			case '2':
				s.show();
				break;
			case '3':
				benefit_list.displayBenefit();
				break;
			case '4':
				s.calTotalpay();
				break;
			case '5':
				printline("Return to main menu....");
				return;
			default:
				printline("Invalid choice ^-^");

			}
			Sleep(3000);
		}
	}
	void functions::handle_salarycalculation() {
		while (c != 0) {
			printline("#Salary Calculation system");
			printline("1.Calculating total system salary\n2.calculate total system benefits\n3.Return to main menu\n***Enter Selection: ");
			cin >> ch;
			switch (ch) {
			case '1':
				s.calTotalpay();
				break;
			case '2':
				s.calTotalSystemBenefit();
			case '3':
				printline("Return to main menu");
				return;
			default:
				printline("Invalid choice^-^");
			}
		}
	}
	void functions::handle_search() {
		while (c != 0) {
			printline("#Search System\n1.Search Employee\n2.Search department\n3.Return to main menu\n###Enter choice: ");
			cin >> ch;
			switch (ch) {
			case '1':
			{
				system("cls");
				printline("1.Search by name\n2.Search by id\n3.Search by jop title\n4.Search by benefit\n###Enter choice: ");
				cin >> ch;
				switch (ch) {
				case '1':
					s.findEmployeeByName();
					break;
				case '2':
					s.findEmployeeById();
					break;
				case '3':
					s.findEmployeeByjopTitle();
					break;
				case '4':
					s.searchBybenefit();
				}
			}
			break;
			case '2':
				depart_list.searchDepartment();
				break;
			case '3':
				printline("Return to main menu...");
				return;
			default:
				printline("Invalid choice ^-^");
			}
		}
	}
	void functions::handle_department() {//assign employee to department
		while (c != 0) {
			printline("#Department System");
			printline("1.Add Department\n2.Edit Department\n3.Delete Department\n4.Return to main menu\n###Enter your choice:");
			cin >> ch;
			switch (ch) {
			case '1':
				depart_list.addDepartment();
				break;
			case '2':
				depart_list.editDepartment();
				break;
			case'3':
				depart_list.delDepartment();
				break;
			case '4':
				printline("Return to main menu");
				return;
			default:
				printline("Invalid choice ^-^");
			}
		}
	}
	