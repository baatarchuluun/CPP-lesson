#include <iostream>
#include <string>
using namespace std;

int main() {
    int num = 42;
    double pi = 3.14159;
    float fnum = 1.234f;

    // Converts integer to string
    string str1 = to_string(num);

    // Converts double to string
    string str2 = to_string(pi);

    // Converts float to string
    string str3 = to_string(fnum);

    cout << "Numbers as String: " << endl;
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    return 0;
}
