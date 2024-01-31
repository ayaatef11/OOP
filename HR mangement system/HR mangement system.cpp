#include <iostream>
#include"Functions.h"
#include<windows.h>
#include<cstdlib>
using namespace std;
functions f;
int g = 1;
//DepartmentList depart_list;
//Department depart(12,"it");
//HRsystem s(1);
HANDLE cout_handle = GetStdHandle(STD_OUTPUT_HANDLE);
int main() {
	SetConsoleTextAttribute(cout_handle, 6);
	while (g!= 0) {
		system("cls");
		f.printline("where you want to go:");
		f.printline("\t1.HR personnel\n\t2.Benefits management\n\t3.salary calculation");
		f.printline("\t4.Reporting\n\t5.search\n\t6.Department Management\n\t0.Exit application");
		f.printline("\tEnter Selection:", false);
		cin >> g;
		system("cls");
		switch (g) {
		case 1:
			f.handle_HRsystem();
			break;
		case 2:
			f. handle_benefits();
			break;
		case 3:
			f.handle_salarycalculation();
			break;
		case 4:
			f.handle_reporting();
			break;
		case 5:
			f.handle_search();
			break;
		case 6:
			f.handle_department();
			break;
		case 0:
		f.printline("\n\n\t\t\tThanks.....:)\n\n");
		return 0;
		default:
		f.printline("Invalid choice,Try again!");
		
		}
		Sleep(4000);
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
