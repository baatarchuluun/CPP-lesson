// setw_lr.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a, b;
	
	cout << "Enter a: "; cin >> a;
	cout << "Enter b: "; cin >> b;
	
	cout << "a:" << setw(6) << right << a << endl;
	cout << "b:" << setw(6) << right << b;
	
	return 0;
}
