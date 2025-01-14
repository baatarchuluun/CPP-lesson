// calendar.cpp
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string monthNames[13] = {"", "Jan", "Feb", "Mar", "Apr", "May", 
"Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
int b[13] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};

bool isLeapYear(int y);
int countLeapYears(int y);
int garig(int y, int m, int d);

int main() {
	int year, m, d, gar, j;
	cout << "Enter year: "; cin >> year;
	
	if (isLeapYear(year)) a[2] = 29;
	for (m = 1; m <= 12; m++) {
		system("cls");
		cout << "     " << monthNames[m] << ", " << year << endl;
		cout << " Mo Tu We Th Fr Sa Su" << endl;
		for (d = 1; d <= a[m]; d++) {
			gar = garig(year, m, d);
			if (d == 1) {
				for (j = 1; j < gar; j++) cout << "   ";
			}
			cout << setw(3) << right << d;
			if (gar == 7) cout << endl;
		}
		getch();
	}
	
	return 0;
}

bool isLeapYear(int y) {
	return (y % 400 == 0 || (y % 4 == 0 && y % 100 !=0));
}

int countLeapYears(int y) {
	int i, s = 0;
	for (i = 1900; i < y; i++) {
		if (isLeapYear(i)) s++;
	}
	
	return s;
}

int garig(int y, int m, int d) {
	int s = 0, gar;
	s = (y - 1900) * 365 + countLeapYears(y);
	s = s + b[m] + d;
	
	if (isLeapYear(y) && m > 2) s++;
	gar = s % 7;
	if (gar == 0) gar = 7;
	
	return gar;
}
