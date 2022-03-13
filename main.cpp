#include "Employee.h"
#include "Date.h"
#include <string>
#include <iostream>
using namespace std;

void printMenu();
int getNumber(int count);

int main() {
	int number;
	Employee MyEmployee;
	Date date;
	do {
		printMenu();
		number = getNumber(3);

		switch (number) {
		case 1:
			date.setDate();
			MyEmployee.setemploy();
			break;
		case 2:
			date.IsDateCorrect();
			date.getDate();
			MyEmployee.getemploy();
			break;
		}
		if (number != 3) 
			system("pause"); //
	} while (number != 3);
		return 0;
}

	void printMenu() {
		system("cls");
		cout << "What do you want to do?" << endl
			<< "1. Enter information about the employee" << endl
			<< "2. See information about the employee" << endl
			<< "3. Exit" << endl;
	}

int getNumber(int count) {
	int num;
	cin >> num;
	while (num < 1 || num > count) {
		cout << "Incorrect input. Try again: ";
		cin >> num;
	} 
	return num;
}
