#include <iostream> // simple_calculator.cpp
using namespace std;

int main() {
	int ind = 1;
	float a, b, c;
	char t;
	cout << "Enter a: "; cin >> a;
	cout << "Enter b: "; cin >> b;
	cout << "Operation (+, -, *, /)"; cin >> t;
	if (t == '+') {
		c = a + b;
	} else if (t == '-') {
		c = a - b;
	} else if (t == '*') {
		c = a * b;
	} else {
		if (b != 0) {
			c = a / b;	
		} else {
			ind = 0;
			cout << "0-d huvaaj bolkue";
		}
	}
	if (ind) {
		cout << a << t << b << "=" << c;	
	}
	
	return 0;
}
