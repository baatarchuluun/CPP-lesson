#include <iostream>
using namespace std;

bool isPrimeNumber(int n);

int main() {
	int n;
	cout << "Enter n: "; cin >> n;
	
	if (isPrimeNumber(n)) {
		cout << n << " is prime number"; 
	} else {
		cout << n << " is not prime number"; 
	}
	return 0;
}

bool isPrimeNumber(int n) {
	int j, s = 0;
	for (j = 1; j <= n; j++) {
		if (n % j == 0) s++;
	}
	if (s == 2) return true;
	
	return false;
}

