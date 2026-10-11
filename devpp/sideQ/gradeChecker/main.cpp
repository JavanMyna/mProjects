#include <iostream>
#include <string>
using namespace std;



int main() {
	string nameUser;
	int subject1, subject2, subject3;

	cout << "================================\n      STUDENT GRADE ANALYZER\n================================\n";

	cout << "Enter your name: ";
	cin >> nameUser;

	cout << "\nEnter marks for three subjects:\n";
	cout << "Subject 1: ";
	cin >> subject1;
	cout << "\nSubject 2: ";
	cin >> subject2;
	cout << "\nSubject 3: ";
	cin >> subject3;

    int totalMarks = subject1 + subject2 + subject3;
	double avgMarks = totalMarks / 3;

//I know these uses <iomanip> but aiyaaa 
// input output manipulation
	cout << "\n================================\n           RESULTS\n================================" << endl;
	cout << "\nName: " << nameUser << endl;
	cout << "Total marks: " << totalMarks << "/300" << endl;
	cout << "Average: " << avgMarks << endl;
	cout << "Highest  mark: " << endl; 
	cout << "Lowest mark: " << endl;
	cout << "Grade: " << endl;
	cout << "================================" << endl;

	return 0;
}
