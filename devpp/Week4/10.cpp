/*
we gotta attempt this ourselves

highlight the ipo

dont direct to code. dont depend to ai bro, sooo try to yourself first. 
maybe how you pick this and that. 

lets write it on our tab first.g

first 10 mins of next lectures
i havent done 9 yet. But whatever
lemme test it*/

#include <iostream>
using namespace std;

int main() {
    int gasChoice, timeReached;
    double gasSpeed, sourceDistance;
    cout << "Choose your gas: \n1. Carbon Dioxide\n2. Air\n3. Helium\n4. Hydrogen\nEnter number(1-4): ";
    cin >> gasChoice;

    if (gasChoice==1) {gasSpeed=258.0;}
    else if (gasChoice==2) {gasSpeed=331.5;}
    else if (gasChoice==3) {gasSpeed=972.0;}
    else if (gasChoice==4) {gasSpeed=1270.0;}
    else {
        cout << "Invalid choice! Choose between 1-4"<< endl;
        return 0;
    }

    cout << "Enter number of seconds it took the sound to travel from source to you";
    cin >> timeReached;

    if (timeReached<0 || timeReached>30) {
        cout << "Invalid time duration. Please choose between 0-30 seconds" << endl;
        return 0;
    }
    sourceDistance = gasSpeed * timeReached;
    cout << "The distance between the source and you is " << sourceDistance << endl;
    return 0;
}