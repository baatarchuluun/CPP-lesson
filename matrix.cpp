// matrix.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int i, j;
	int matrix[2][3];
	// matrix-n utgiig garaas avah
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			cout << i << ", " << j << " element: ";
			cin >> matrix[i][j];
		}
	}
	
	cout << matrix[1][1] << endl;
	matrix[1][1] = 10;
	cout << matrix[1][1] << endl;
	// matrix-g hevleh
	cout << "Matrix:" << endl;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			cout << setw(3) << right << matrix[i][j];
		}
		cout << endl;
	}
	
	return 0;
}
