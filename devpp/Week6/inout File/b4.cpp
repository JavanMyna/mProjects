#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream infile; //why do we need this
    infile.open("input.txt");
    if (!infile) {
        cout << "File open failure!" << endl;
    } else {
        cout << "Opened input.txt" << endl;
    }
    int currentNumber;
    int total = 0;

    while (infile >> currentNumber) {
        if (currentNumber%2==0) {
            total += currentNumber;
            cout << "Added " << currentNumber << endl;
        }
    }

    cout << "Total: " << total << endl;

    infile.close();//Whats the difference actually 
    return 0;
}