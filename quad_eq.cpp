#include <iostream> // quad_eq.cpp
#include <cmath>
using namespace std;

int main() {
	int a, b, c;
	float d, x, x1, x2;
	cout << "a, b, c: "; cin >> a >> b >> c;
	d = b * b - 4 * a * c; // discremenant-g olj bn
	if (d > 0) {
		x1 = (-b + sqrt(d)) / (2*a);
		x2 = (-b - sqrt(d)) / (2*a);
		cout << "2 roots. x1: " << x1 << ", x2: " << x2;
	} else if (d == 0) {
		x = -b / (2 * a);
		cout << "1 root. x: " << x;
	} else {
		cout << "No root";
	}
	return 0;
}
