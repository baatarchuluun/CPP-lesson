#include <iostream>
using namespace std;

int main() {
	int i, max, numbers[5];	
	// garaas massiv-n utgiig avah
	for (i = 0; i <= 4; i++) {
		cout << i << " value: "; 
		cin >> numbers[i]; // utga oruulj bn;
	}

	max = numbers[0]; min = numbers[0];
	for (i = 0; i <= 4; i++) {
		if (numbers[i] > max) max = numbers[i];
		if (numbers[i] < min) min = numbers[i];
	}
	cout << "MAX value: " << max << endl;
	cout << "MIN value: " << min << endl;	

	return 0;
}
