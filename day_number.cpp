#include <iostream>
#include <string>
using namespace std;

int main() {
	int day; 
	string dayName;
	cout << "Day number (0-6): "; cin >> day;
	switch (day) {
		case 0: dayName = "Sunday"; break;
		case 1: dayName = "Monday"; break;
		case 2: dayName = "Tuesday"; break;
		case 3: dayName = "Wednesday"; break;
		case 4: dayName = "Thursday"; break;
		case 5: dayName = "Friday"; break;
		case 6: dayName = "Saturday"; break;
		default: dayName = "Wrong number";
	}
	cout << dayName;
	return 0;
}
