#include <iostream>
using namespace std;

int main() {
    short testVar = 32767;
    cout << testVar << endl;
    testVar = testVar + 1;
    cout << testVar << endl;
    testVar = testVar - 1;
    cout << testVar << endl;

    cout << "\nlike\n";
    unsigned short testVar2 = 0;
    cout << testVar2 - 1; //why does this output as -1?? shouldnt it be positive number?
    return 0;
}