/*
input : two number 
process : a lot "if else" condition
output : displays ""
*/

#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cout << "These numbers you enter will be determined whether they're bigger or smaller" << endl;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	if (num1 > num2) {
		cout << "Large number: " << num1 << endl;
		cout << "Small number: " << num2 << endl;
	}

	else if (num2 > num1) {
        cout << "\nLarge number: " << num2 << endl;
        cout << "Small number: " << num1 << endl;
        }

    else {
        cout << "Both " << num1 << " and " << num2 << " are equal to eachother!" << endl;
    }
	return 0;
}
