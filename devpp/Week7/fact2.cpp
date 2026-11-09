#include<iostream>
using namespace std;

int main(){
    int f=3; // the value is assigned by computer, do not typed this line 

    //type your answer in the answer box for code within this section only
    int n = 0;
    int fact = 1;

    cout << "The number to be evaluated is: " << f << endl;

    while (fact < f) {
        n++;
        fact *= n;
    }

    if (fact == f) {
        cout << "Number " << f << " is a factorial number for " << n << "!" << endl;
    } else {
        cout << "Number " << f << " is NOT a factorial number." << endl;
        cout << "The next factorial calculation is: " << fact << " which is " << n << "!" << endl;
    }
    
        return 0;
}