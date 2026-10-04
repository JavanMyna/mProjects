#include <iostream>
using namespace std;

int main() {
	string name; //Declaring name as a string
	string city; //Declaring city as a string
	
	cout << "Please enter your full name: "; //like input() in Python
	getline(cin, name); //Getline allows user to input sentences
	cout << "Enter the city you live in: ";
	getline(cin, city);
	
	cout << "Hello, " << name << endl;
	cout << "You live in " << city << endl;
	return 0; //Ends the program
}
