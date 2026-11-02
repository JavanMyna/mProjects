#include <iostream>
using namespace std;

int main() {
    int n = 123;
    int reversed_number = 0;

    while (n != 0) {
        int remainder = n % 10;
        reversed_number = reversed_number * 10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << reversed_number << endl;
    return 0;
}
