/*
input: number
process: if negative, use abs to positive it
output: absolute value of the number
*/

#include <iostream>
using namespace std;

int main() {
    int numValue;
    cout << "Enter ur number: ";
    cin >> numValue;

    if (numValue < 0) {
        numValue = abs(numValue); 
    }

    cout << "The absolute number of what u entered is " << numValue << endl;
    return 0;
}
