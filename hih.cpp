#include <iostream> // swap.cpp
using namespace std;
// hih - hamgiin ih huvaagch
int main() {
	int n, i = 1, hih;
	cout << "Enter n: "; cin >> n;
	while (i <= n) {
		if (n % i == 0) {
			cout << i << " ";
			if (i != n) hih = i;
		}
		i++;
	}
	cout << "\nHIX: " << hih;
	return 0;
}
