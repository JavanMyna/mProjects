#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<int> digits;

    digits.push_back(1);
    digits.push_back(2);
    digits.push_back(3);

    string result = "";

    for (int digit : digits) {
        result += to_string(digit);
    }

    cout << result << endl;

    return 0;
}
//If I were to do Week3 of 3.cpp my own way. to for loop and then append to list then stitch it back into a value