// 4:44-5:00pm then I go shower lah
// It wants me to handle IC. so its not a string huh since it wants me to assume all ic were born earlier tahn 2000
// So in my data none should start from 0. 
// no need to consider month as well

// Input : user's IC 
// Process : Looks at the first 2 numbers of the IC, then minus with 2026.
// Output : Displays how old user is

#include <iostream>
#include <string>
using namespace std;

int main() {
    string userIC, firstTwoStr;
    int yearBorn_user;
    cout << "Enter IC: ";
    cin >> userIC;

    firstTwoStr = userIC.substr(0, 2); //Whats substr for usually. Substract?
    yearBorn_user = stoi(firstTwoStr); //first time using stoi here

    //soooo we dont take it as integer huh. Later baru integer
    
    /*int i;
    for (i=0;i<2;i++) {
        cout << userIC[i];
    }*/ //I'll be honest. I really dont know how to do this so I asked google. theres a new term ive never used before it seems

    int age = 2026 - 1900 - yearBorn_user;

    cout << "It is 2026 currently...\nYour age is " << age << " years old!";
    return 0;
}