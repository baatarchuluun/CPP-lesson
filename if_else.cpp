// if_else.cpp
#include <iostream>
using namespace std;

int main() {
	int score;
	
	cout << "Enter score: (1-100)"; cin >> score;
	if (score < 0 || score > 100) {
		cout << "Wrong value";
	} else {
		if (score >= 90) {
			cout << "A";
		} else if (score >= 80) {
			cout << "B";
		} else if (score >= 70) {
			cout << "C";
		} else if (score >= 60) {
			cout << "D";
		} else {
			cout << "F";
		}
		
		cout << "(" << score << ")";
	}
	
	return 0;
}
