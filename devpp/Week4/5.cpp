#include <iostream>
#include <cmath>
using namespace std;

//BMI = weight x 703 / pow(height, 2)
// Weights (lb), Height(inches)

int main() {
    double BMI, weight, height;
    
    cout << "Lets calculate your BMI but we're using imperial number aight!\nEnter weight(lb): ";
    cin >> weight;
    cout << "Enter height (inches): ";
    cin >> height;

    BMI = (weight * 703) / pow(height, 2);

    if (BMI >= 18.5 && BMI <= 18.5) {
        cout << "Idk why they call u living a sedentary lifestyle but ur BMI says it looks good to me. Keep it up!" << endl;
    }
    else if (BMI < 18.5) {  
        cout << "You are considered underweight. Gotta put in some calories yow!" << endl;
    }
    else if (BMI > 25) {
        cout << "Duuude ur overweight fr, cut down some calories yow." << endl;
    }
    return 0;
}//fin at 10:54pm yey