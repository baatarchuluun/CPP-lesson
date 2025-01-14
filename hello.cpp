#include <iostream>
using namespace std;

int summa(int a, int b);

int main() {
	int c;
	// Hello World text-g hevlej bn
	cout << "Hello World!" << endl;
	/*
	Uuriinhuu tuhai delgerengui
	bichij bn
	*/
	cout << "My name is Baatar\n";
	
	c = summa(5, 6);
	cout << c << endl;
	cout << INT_MAX << " " << INT_MIN;
	return 0;
}

int summa(int a, int b) {
	return a + b;
}
