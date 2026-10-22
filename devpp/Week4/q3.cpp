#include <iostream>
using namespace std;

int main(){

	int mark;
	string grade;

    grade= "";
    mark = 33;
        
    // fill your answer in the answer box    
    if (mark >= 80 && mark <= 100) {
        grade = "A";
    }
    else if (mark >= 70 && mark < 80) {
        grade = "A-";
    }
    else if (mark >= 64 && mark < 70) {
        grade = "B+";
    }
    else if (mark >= 58 && mark < 64) {
        grade = "B";
    }
    else if (mark >= 52 && mark < 58) {
        grade = "B-";
    }
    else if (mark >= 46 && mark < 52) {
        grade = "C+";
    }
    else if (mark >= 40 && mark < 46) {
        grade = "C";
    }
    else if (mark >= 36 && mark < 40) {
        grade = "C-";
    }
    else if (mark >= 32 && mark < 36) {
        grade = "D+";
    }
    else if (mark >= 28 && mark < 32) {
        grade = "D";
    }
    else if (mark >= 25 && mark < 28) {
        grade = "D-";
    }
    else if (mark >= 0 && mark < 25) {
        grade = "F";
    }
    else {
        cout << "Marks need to be between and inclusive of 0 and 100.\nThe value you entered is an invalid mark." << endl;
        return 0;
    }
    cout << "If your mark is: " << mark << endl;
    cout << "Your grade is: " << grade << endl;
    return 0;
}