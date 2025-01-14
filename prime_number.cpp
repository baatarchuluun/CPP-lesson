#include <iostream>
using namespace std;

int main() {
	int i, j, s;
	for (int i = 1; i <= 1000; i++) {
		s = 0;
	    for (int j = 1; j <= i; j++) {
	    	if (i % j == 0) s++; 
	    }
	    if (s == 2) cout << i << " ";
	}
	
	return 0;
}
