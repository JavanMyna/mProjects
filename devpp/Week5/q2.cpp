#include<iostream>
#include<cmath>
using namespace std;

int main(){

	int a=5, b=7;  //declared and assigned by computer.
	//type your answer in the answer box for code within this section only
    double c = sqrt(pow(a, 2) + pow(b, 2)); 
    int c_int = c;
    
    cout << "Given a=" << a << " and b=" << b << endl;
    
    if (c==c_int) {
        cout << "Hypotenuse is a rounded number";
    }
    else {
        cout << "Hypotenuse is not a rounded number";
    }

    return 0;
}

//i: a and b
//p: 
//o: the c