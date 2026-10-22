#include<iostream>
using namespace std;

int main(){
    int x, myVar;
    x = 7;
      // fill your answer in the answer box            
        if (int num = x%5; num == 0) {
            myVar = 30;
            cout << x << " has myVar " << myVar << ", is divisible by 5.";
        }
        else if (int num = x%3; num == 0) {
            myVar = 10;
            cout << x << " has myVar " << myVar << ", is divisible by 3.";
        }
        else if (int num = x%2; num == 0) {
            myVar = 20;
            cout << x << " has myVar " << myVar << ", is divisible by 2.";
        }
        else {
            myVar = 0;
            cout << x << " has myVar " << myVar << ", is not divisible by 2, 3 or 5.";
        }

    return 0;
}