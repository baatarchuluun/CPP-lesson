// cinput.cpp
#include <iostream>
using namespace std;

int main() {
	int age, x, y, z, volume;
	
	cout << "Enter age: "; 
	cin >> age;
	cout << "Age: " << age << endl;
	
	cout << "x, y, z-g oruul: ";
	cin >> x >> y >> z;
	
	volume = x * y * z;
	cout << "Volume: " << volume;
	
	return 0;
}
