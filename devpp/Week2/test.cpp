#include <iostream>
using namespace std;

int main() {
    unsigned long long int num1 = -1;
    
    // without 'long' and also one 'long' it would be 4294967295
    // but with 'long long' is 18446744073709551615
    cout << num1;
    int long long num2 = 18446744073709551615 / 4294967295;
    cout << num2;
    return 0;
}