#include <iostream>
#include <string>
using namespace std;

int main() {
	string nameUser;

	"================================/n      STUDENT GRADE ANALYZER/n================================";

	cout << "Enter your name: ";
	cin >> nameUser;

	cout << "\nEnter marks for three subjects:\n";
	cout << "Subject 1: ";
	cin >> subject1;
	cout << "\nSubject 2: "
	cin >> subject2;
	cout << "\nSubject 3: "
	cin >> subject3;

        int totalMarks = subject1 + subject2 + subject3;
	double avgMarks = totalMarks/3

	cout << "/n================================/n           RESULTS/n================================" << endl;
	cout << "Name: " << nameUser << endl;
	cout << "Total marks: " << totalMarks << "/300" << endl;
	cout << "Average: " << avgMarks << 

	return 0;
}
