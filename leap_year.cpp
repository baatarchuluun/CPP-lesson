#include <iostream> // leap_year.cpp
using namespace std;

int main() {
	int year;
	cout << "Enter year: "; cin >> year;
	// 400-d huvaagdah, 100-d huvaagddag ni bish
	// 4-t huvaagdah
	
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
		cout << "Leap year";
	} else {
		cout << "Regular year";
	}
	return 0;
}
