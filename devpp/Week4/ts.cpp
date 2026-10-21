#include <iostream>
using namespace std;

int main() {
    int a; 
    
    cout << "Enter number: ";
    cin >> a;

    if (a > 100 || a < 0) cout << "Invalid"; // Use of || as 'or' and && is 'and'
    else if (a >= 90) cout << 'A'; //apparently without {} is also okay.
    else if (a >= 80) cout << 'B';
    else if (a >= 70) cout << 'C';
    else if (a >=60) cout << 'D';
    else cout << 'E';

    string b;
    cin >> b;
    cout << b.length();



    return 0;
}

//Apparently u can put initialization in if statements like
/*
if (int a; a < 10) {
    //ur code
}
*/

