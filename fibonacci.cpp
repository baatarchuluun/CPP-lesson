#include <iostream> // fibonacci.cpp
using namespace std;

int main() {
	int n, f1 = 0, f2 = 1, f3, i;
	cout << "Enter n: "; cin >> n;
	cout << f1 << " " << f2 << " ";
	for (i = 1; i <= (n - 2); i++) {
		f3 = f1 + f2;
		cout << f3 << " ";
		f1 = f2;
		f2 = f3;
	}
	return 0;
}
