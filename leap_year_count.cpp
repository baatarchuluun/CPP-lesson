#include <iostream>
using namespace std;

int countLeapYear(int y1, int y2);

int main() {
	int y1, y2;
	cout << "Enter year1: "; cin >> y1;
	cout << "Enter year2: "; cin >> y2;
	cout << "Count of leap years: " << countLeapYear(y1, y2);
	return 0;
}

int countLeapYear(int y1, int y2) {
	int s = 0, y;
	for (y = y1; y <= y2; y++) {
		if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
			s++;	
		}
	}
	return s;
}

