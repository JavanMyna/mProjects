

/*
input: number

process: if number < 0, then number *= -1
/////////////////process: if number is negative, then use abs() to positive it
[USING CONDITIONAL OPERATOR, meaning we dont use functions]

output: display absolute value of the number (always positive)

*/



































#include <iostream>
using namespace std;

int main() {
    int numValue;
    cout << "Enter ur number: ";
    cin >> numValue;

    if (numValue < 0) {
///        numValue = abs(numValue); 
//    numValue *= -1;
        numValue = -numValue;
    }

    cout << "The absolute number of what u entered is " << numValue << endl;
    return 0;
}
