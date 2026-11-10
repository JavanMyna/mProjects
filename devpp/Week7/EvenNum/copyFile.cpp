#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFile;
    ofstream outFile;
    int number, copied = 0; //number is for the value, copied is for our counter

    inFile.open("input.txt"); //this one we use inFile to read the input
    outFile.open("even.txt"); //This one opens a new file called even.txt to refer to when we copy

    if (!inFile) {
        cout << "No input.txt file to be found..." << endl;
    } else {
    while (inFile >> number) { //whats this for...
        if (number % 2 == 0) {
            outFile << number << " "; //so it keeps looping without overwriting each other because it scans with the while loop then copy it into the even.txt file
            copied++; //oh this acts as a counter huh
        }
    }
        inFile.close();
        outFile.close();
        //what about error management
        cout<<"Even numbers copied: " << copied << endl;
}

    return 0;
}

//instead of else, I can simply make it return 1... Cool 