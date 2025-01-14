#include <iostream>
#include <string>
using namespace std;

int main() {
	string studentName;
	int score;
	char ch;
	
	do {
		cout << "Student name: "; cin >> studentName;
		do {
			cout << "Grade (0-100): "; cin >> score;
		} while (score < 0 || score > 100);
		
		// score -> A, B, C, ...
		
		cout << studentName << " " << score << endl;
		cout << "Again? (Y/N)"; cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	cout << "Finished!";
	return 0;
}
