#include <iostream> // swap.cpp
using namespace std;

int main() {
	int a, b, c;
	cout << "Enter a: "; cin >> a;
	cout << "Enter b: "; cin >> b;
	c = a;
	a = b;
	b = c;
	cout << "a: " << a << endl;
	cout << "b: " << b;
	return 0;
}
