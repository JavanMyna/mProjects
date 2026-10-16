//This one is a redo of 3.cpp because dr uses another method, since its int, so dr divides by 1 000000 000000 so we only get the first 2 digits
// Input : user's IC 
// Process : Looks at the first 2 numbers of the IC, then minus with 2026.
// Output : Displays how old user is

#include <iostream>
#include <string>
using namespace std;

int main() {
    long long userIC;
    int yearBorn_user, firstTwoDigit;
    cout << "Enter IC: ";
    cin >> userIC;

    firstTwoDigit = userIC / 10000000000; //gets only the first two digit
    yearBorn_user = 1900 + firstTwoDigit; //first time using stoi here > Yes it means string to integer s to i
    

    //soooo we dont take it as integer huh. Later baru integer
    
    /*int i;
    for (i=0;i<2;i++) {
        cout << userIC[i];
    }*/ //I'll be honest. I really dont know how to do this so I asked google. theres a new term ive never used before it seems

    int age = 2026 - yearBorn_user;

    cout << "You are born in " << yearBorn_user << ". It is 2026 currently...\nYour age is " << age << " years old!";
    return 0;
}

//apparently dr uses divide by 1 with 10 zeros. 
// because int automatically ignores decimal, wouldnt it round up or down? no because it