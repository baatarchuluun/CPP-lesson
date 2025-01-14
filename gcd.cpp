#include <iostream> // function_ex1.cpp
using namespace std;

int hbeh(int a, int b);

int main() {
	int a, b;
	cout << "Enter a: "; cin >> a;
	cout << "Enter b: "; cin >> b;
	cout << "HBEH: " << hbeh(a, b) << endl;
	return 0;
}

int hbeh(int a, int b) {
	int i;
	for (i = 1; i <= a * b; i++) {
		if (i % a == 0 && i % b == 0) {
			return i;
		}
	}
}





