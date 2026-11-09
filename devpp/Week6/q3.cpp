#include<iostream>
using namespace std;

int main(){
    int f=40; // the value is assigned by computer, do not typed this line 

    //type your answer in the answer box for code within this section only
    cout << "The number to be evaluated is: " << f << endl;

    int facted = 1;
    for (int i=f; i>=1; i--) {
        facted = facted*i;
       // cout << "Current facted: " << facted << endl;
    }
//cout << "Facted is " << facted << endl;
    int j = 1;
    //bool isFactorial = false;
    int fNum = 1;

    while (j < f) {
        fNum++;
        j = j * fNum;
    }

    if (j == f) {
        cout << "Number " << f << " is a factorial number for " << fNum << "!" << endl;
    } else {
        cout << "Number " << f << " is NOT a factorial number." << endl;
        cout << "The next factorial calculation is: " << facted << " which is " << f << "!" << endl;
    }
/*    
    for (int fNum=2; fNum<(f); fNum++) {
        cout << fNum << endl;
        j = j * fNum;
        if (j / f == 0) {
            cout << "Number " << f << " is a factorial number for " << fNum << "!" ;
        } else {
        cout << "Number " << f << " is NOT a factorial number." << endl;
        cout << "The next factorial calculation is: " << facted << " which is " << f << "!" << endl;
        }
}
*/


    return 0;
}