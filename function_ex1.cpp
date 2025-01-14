#include <iostream> // function_ex1.cpp
using namespace std;

void sayHello();
int square(int x);
int factorial(int x);

int main() {
	int n;
	cout << "Enter n: "; cin >> n;
	sayHello();
	cout << "Square: " << square(n) << endl;
	cout << "Factorial: " << factorial(n) << endl;
	return 0;
}

void sayHello() {
	cout << "Hello World!" << endl;
}

int square(int x) {
	return x * x;
}

int factorial(int x) {
	int i, s = 1;
	for (i = 1; i <= x; i++) {
		s = s * i;
	}
	return s;
}





