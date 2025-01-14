#include <iostream>
#include <string>
using namespace std;

int main() {
	string firstName = "Bat";
	string lastName = "Bold";
	// Merge (+)
	string fullName = firstName + " " + lastName; // Bat Bold
	// length-g oloh
	int length = fullName.length();  // or size()
	// Temdegted handah
	char firstChar = firstName[0];   // 'B'
	
	cout << fullName << endl;
	cout << fullName.substr(0, 3) << endl;  // Bat
	cout << fullName.find("Bold") << endl;	// 4
	cout << fullName.empty() << endl;		// false
	fullName.push_back('!');
	cout << fullName << endl; 				// Bat Bold!
	cout << "Length: " << length << endl;	// 8
	cout << "1st char: " << firstChar << endl;		// B
	
	fullName.replace(0, 3, "Dulam");		
	cout << fullName << endl;				// Dulam Bold!
	fullName.insert(5, "jav");			
	cout << fullName << endl;		// Dulamjav Bold!
	fullName.erase(0, 5);
	cout << fullName << endl;		// jav Bold!
	fullName.resize(15, '*');
	cout << fullName << endl;		// jav Bold!********
	
	return 0;
}




