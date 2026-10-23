// 3:21pm

// hiring 18 to 28 years of age
// input : current_year, userBirthYear
// process: (userAge = current_year - userBirthYear) (if 28 > userAge > 18, then eligible )
// output : userAge, eligible/not


//OHHH I FREAKING MISUNDERSTOOD. I THOUGHT THEIR BIRTHDAY GILLAAAAA. 
//easier way is to just use year. Current year - User's year. jeeeeez
//My first mistake is writing it as DOB, its BIRTHYEAR BRO


#include <iostream>
using namespace std;

int main() {
    int current_year, userBirthYear, userAge;

    cout << "Enter the current year (eg: 2020): ";
    cin >> current_year;

    cout << "Enter the year of your birthday: ";
    cin >> userBirthYear;

    userAge = current_year - userBirthYear;
    cout << "You are " << userAge <<" years old." << endl;

    if (userAge >= 18 && userAge <= 28) { //sometimes i forget they cant connect directly
        cout << "You are eligible for the job!" << endl;
    }
    else {
        cout << "You are not eligible for this job." << endl;
    }
    return 0;
}
//Assuming everyone is born after 2000
// 4:01 mf took me so long