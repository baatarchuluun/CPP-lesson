// code/data_type2.cpp
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	int a = 5, b = 6, area, p;
	string text = "Programming";
		
	area = a * b;
	p = (a + b) * 2;
	
	cout << "Area: " << area << endl;
	cout << "Perimeter: " << p << endl;
	cout << "Length: " << text.length() << endl;
	cout << "First char: " << text[3] << endl;
	cout << "Sub str: " << text.substr(5, 4);
	
	return 0;
}
