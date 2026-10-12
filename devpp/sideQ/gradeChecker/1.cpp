#include <iostream>
using namespace std;

int main() {
    int value = 100;
    cout << value << endl;

    if (value) {
        int value = 200;
        cout << value << endl;
        //return value;
    }

    cout << value << endl;

    return 0;
}