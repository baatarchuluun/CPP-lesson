// calendar.cpp
// author: Baatarchuluun Altanbayar
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
using namespace std;
// functions
int countLeapYear(int y1, int y2);
bool isLeapYear(int y);
int garig(int y, int m, int d);
// global variables
int pastDays[12] = {0, 3, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
int daysOfMonths[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
	int i, j, y, m = 1, gar;
	string monthNames[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
	cout << "Enter year: "; cin >> y;
	do {
		system("CLS");
		cout << "       " << monthNames[m - 1] <<", " << y << endl;
		cout << " Mo Tu We Th Fr Sa Su" << endl;
		
		for (i = 1; i <= daysOfMonths[m - 1]; i++) {
			gar = garig(y, m, i);
			if (i == 1)
				for (j = 1; j < gar; j++) cout << "   ";
			cout << setw(3) << right << i;
			if (gar == 7) cout << endl;
		}
		m++; getch(); 
	} while (m < 13);
	
	return 0;
}

int countLeapYear(int y1, int y2) {
	int s = 0, y;
	for (y = y1; y < y2; y++)
		if (isLeapYear(y)) s++;
	return s;
}

bool isLeapYear(int y) {
	return y % 400 == 0 || (y % 4 == 0 && y % 100 != 0);
}

int garig(int y, int m, int d) {
	int s = 0, gar;
	s = 365 * (y - 1900) + countLeapYear(1900, y);
	if (isLeapYear(y) && m > 2) s++;
	s += pastDays[m - 1] + d - 1;
	gar = (s + 1) % 7;
	
	return (gar == 0) ? 7 : gar;
}

