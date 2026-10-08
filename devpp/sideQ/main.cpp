#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int numberUser;
	cout << "Enter any number: ";
	cin >> numberUser;

	cout << "\nYou entered: " << numberUser << endl;
	cout << "+10: " << numberUser + 10 << endl;
	cout << "x2: " << numberUser*2 << endl;
	cout << "squared: " << pow(numberUser, 26) << endl;
	cout << "Remainder after /3: " << numberUser%3 << endl;

	return 0;
}
