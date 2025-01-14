#include <iostream> // summa.cpp
using namespace std;

int main() {
	int i, s = 0;
	// summa
	for (i = 1; i <= 100; i++) {
		s = s + i;
	}
	cout << "Summa: " << s << endl;
	/*
	1st: i=1 s=0; i=2 s=1
	2nd: i=2 s=1; i=3 s=1+2=3
	3rd: i=3 s=3; i=4 s=3+3=6
	4th: i=4 s=6; i=5 s=6+4=10
	*/
	// factorial
	s = 1;
	for (i = 1; i <= 10; i++) {
		s = s * i;
	}
	cout << "Factorial: " << s << endl;
	
	// 1-100 hurtelh tegsh toonii niilber
	s = 0;
	for (i = 1; i <= 100; i++) {
		if (i % 2 == 0) {
			s = s + i;	
		}
	}
	cout << "Summa(even): " << s << endl;
	return 0;
}
