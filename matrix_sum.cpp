// matrix.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int i, j, s = 0;
	int matrix[2][3];
	// matrix-n utgiig garaas avah
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			cout << i << ", " << j << " element: ";
			cin >> matrix[i][j];
		}
	}
	
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			s = s + matrix[i][j];
		}
	}
	cout << "Sum: " << s;
	
	return 0;
}
