#include "Date.h"
#include <iostream>
#include <cassert>
using namespace std;

bool correct = true; 

void Date::setDate()
{
	cout << "Enter day: "; cin >> d;
	cout << "Enter month: "; cin >> m;
	cout << "Enter year: "; cin >> y;
}

void Date::IsDateCorrect() {
	if (d < 1 || m < 1 || m > 12) {
		correct = false;
	}
	else if (y % 4 == 0) {
		if (m == 2 && d > 29) {
			correct = false;
		}
		else if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 9 || m == 11) && d > 31) {
			correct = false;
		}
		else if ((m == 2 || m == 4 || m == 6 || m == 8 || m == 10 || m == 12) && d > 30) {
			correct = false;
		}
	}
	else if (m == 2 && d > 28) {
		correct = false;
	}
	else if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 9 || m == 11) && d > 31) {
		correct = false;
	}
	else if ((m == 2 || m == 4 || m == 6 || m == 8 || m == 10 || m == 12) && d > 30) {
		correct = false;
	}
}

/*Date::Date() {
	d = 1; m = 1; y = 2022;
}
Date::Date(int day, int month, int year = 2022) {
	assert(year != 0);
	d = day;
	m = month;
	y = year;
}
Date::Date(const Date &date) : d(date.d), m(date.m), y(date.y) {
	std::cout << "copy constructor is working! ";
}
Date::~Date() {

}*/

int Date::getDate()
{
	if (correct == true) {
		cout << d << "/" << m << "/" << y << '\n';
	}
	else { cout << "Invalid date" << endl; }
	return 0;
}
