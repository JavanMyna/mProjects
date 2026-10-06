#include <iostream>
#include <string>
using namespace std;


int main() {
    int checking;
    unsigned int miles;
    unsigned long long diameter;
    string pineapple;

    pineapple = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
    checking = -20;
    miles = 4276;
    diameter = 1000000000000000;
    cout << "We have made a long journey of " << miles;
    cout << " miles.\n";
    cout << "Our checking account balance is " << checking;
    cout << "\nThe galaxy is about " << diameter;
    cout << " light years in diameter.\n";
    cout << pineapple << endl;
    return 0;
}