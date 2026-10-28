/* 1:50pm
i: (+veValue)
p: (if -ve found, give error), 
o: 
*/

#include <iostream>
using namespace std;

int main() {
    
    int value, sum = 0;
    cout << "Input positive value: ";
    cin >> value;

    if (value < 0) {
        cout << "Must be a positive number";
    }
    else {
        for (int i=1;i<=value;i++){ // i thought its the other way around, but condition comes first before the other
            sum += i;
        }
        cout << sum;
    }

    
    return 0;
}