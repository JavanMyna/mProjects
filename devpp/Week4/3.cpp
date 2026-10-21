// 3:21pm

// hiring 18 to 28 years of age
// input : current_year, userDOB
// process: (userAge = current_year - userDOB) (if 28 > userAge > 18, then eligible )
// output : userAge, eligible/not

#include <iostream>
using namespace std;

int main() {
    int current_year, userDOB, userAge;

    cout << "Enter the current year: ";
    cin >> current_year;

    cout << "Enter your date of birth in this format (YYMMDD): ";
    cin >> userDOB;

    userAge = current_year - (2000 + userDOB / 10000);
    cout << "You are " << userAge <<" years old." << endl;

    if (18 <= userAge <= 28) {
        cout << "You are eligible for the job!" << endl;
    }
    else {
        cout << "You are not eligible for this job." << endl;
    }
    return 0;
}
//Assuming everyone is born after 2000
// 4:01 mf took me so long