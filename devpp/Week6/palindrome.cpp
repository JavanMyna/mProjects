#include <iostream>
using namespace std;

int main() {
    int num = 14541, ref = num, rem, rev=0;

    while (num != 0) {
        rem = num%10;
        rev = rev*10 + rem; //now it makes sense, kan everytime reversed number is updated
        // we *10 it so we leave a space at the right for the remainder to come in
        num /= 10;
        cout << rev << endl;
    }

    cout << "Reversed number is " << rev << endl;
    if (rev == ref) {
        cout << "Number is a palindrome." << endl;
    } else {
        cout << "Number is NOT a palindrome." << endl;
    }

    return 0;
}