#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Type a character and press Enter: ";
    cin >> ch;
    cout << "You entered " << ch << endl;
    return 0;
}// Wow... so by 'cin >>', whitespace is discriminated, it doesnt have any rights to be a character :(
// so cin.get() allows it to have rights

// lol i learn \t is tab, thats cool
// so newline \n, is the same as enter huh if it got cin.get()