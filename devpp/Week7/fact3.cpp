#include<iostream>
using namespace std;

int main(){
    int f; // the value is assigned by computer, do not typed this line 
    cout << "Enter a number(f): ";
    cin >> f;

    //type your answer in the answer box for code within this section only
    int i=1, count=1; //so when i put it as 0, everything starts to be weird. Only when i put count as 1 it starts normal. But theres still a problem, idk why my output has no space inbetween the number and the string, even i clearly did put a space there... 
    cout << "The number to be evaluated is: " << f << endl;

    while (i<f) {
        count++;
        i *= count; 
    }

    if (i==f) {
        cout << "Number " << f << " is a factorial number for " << i << "!" << endl;
    } else {
        cout << "Number " << f << " is NOT a factorial number.\nThe next factorial calculation is: " << i << " which is " << count << "!" << endl;
    }

    return 0;
}