#include "Employee.h"
#include <iostream>
using namespace std; 

void Employee::setemploy()
{
	int a = 0;
	cout << "Enter id: "; cin >> id; 
	cout << "Enter salary: "; cin >> salary;	
	cout << "Enter etype (1 - Lab Assistant, 2 - Secretary, 3 - Manager): ";  cin >> a;
	while (a < 1 || a > 3) {
		cout << "Invalid input(Employee's type). Try again: " << '\n';
		cin >> a;
	}
	if (a == etype::LABASSISTANT) { //integer
		etype_ = LABASSISTANT;
	}
	else if (a == etype::SECRETARY) {
		etype_ = SECRETARY;
	}
	else if (a == etype::MANAGER) {
		etype_ = MANAGER;
	}
}

void Employee::getemploy()
{
	cout << "Employee's id: " << id << '\n';
	cout << "Employee's salary: " << salary << '\n' ;

	switch (Employee::etype_) {
	case 1:
		cout << "Employee's type: Lab Assistant" << '\n';
		break;
	case 2:
		cout << "Employee's type: Secretary" << '\n';
		break;
	case 3:
		cout << "Employee's type: Manager" << '\n';
		break;
	default:
		cout << "Invalid input(Employee's type). Try again" << '\n';
		break;
	}
}



