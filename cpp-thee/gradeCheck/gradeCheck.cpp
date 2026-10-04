// 8:15pm 4 Octobor 2026

#include <iostream>

using namespace std;
// Input : User's mark (0-100)
// Process : 'if' logic for each mark range
// Output : Displays user grade

char checkGrade(int userMark);

int main() {
    int userMark;
    
    cout << "Enter your mark: ";
    cin >> userMark;
    cout << endl;

    char gradeResult = checkGrade(userMark);

    cout << "Grade: " << gradeResult << endl;
    return 0;
}

char checkGrade(int userMark) {
    char gradeResult;
// in cpp, they dont do it like python, they read from left to right. So better if its "input >= maxNumber" because if it fails, it just moves on to the next logic
/*
    if (80 < userMark < 100) {
        gradeResult = 'A';
    } else if (70 < userMark < 80) {
        gradeResult = 'B';
    } else if (60 < userMark < 70) {
        gradeResult = 'C';
    } else if (50 < userMark < 60) {
        gradeResult = 'D';
    } else if (0 < userMark < 50) {
        gradeResult = 'F';
    } else {
        gradeResult = '?';
    }
*/
    if (userMark >= 80) {
        gradeResult = 'A';
    } else if (userMark >= 70) {
        gradeResult = 'B';
    } else if (userMark >= 60) {
        gradeResult = 'C';
    } else if (userMark >= 50) {
        gradeResult = 'D';
    } else if (userMark >= 0) {
        gradeResult = 'F';
    } else {
        gradeResult = '?';
    }

    return gradeResult; 
}
//9:20pm fin :)
// g++ -g gradeCheck.cpp -o gradeCheck.exe && ./gradeCheck.exe 