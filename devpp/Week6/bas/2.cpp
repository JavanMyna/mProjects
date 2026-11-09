#include <iostream>
using namespace std;

int main() {
    int n, digits = 0;
    cout << "Insert number to create a triangle: ";
    cin >> n;

        for (int i = 1; i <= n; i++) {
            digits = digits + i;
            cout << digits << endl;
            digits = digits*10;
        }
    return 0;
}
/*
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) cout << j;
    cout << endl;
}
*/