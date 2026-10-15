#include<iostream>
#include<cmath>

using namespace std;

int main(){
        float value1 = 100;
        float value2 = 300;
        float value3 = 50;

        cout << "There are 30 days for first value, 31 days for 2nd value and 15 days for 3rd value.\n";
        //fill your program in the answer box
        float value1_avg = value1 / 30; 
        float value2_avg = value2 / 31;
        float value3_avg = value3 / 15;
        float avg_3mth = ( value1 + value2 + value3 )/ 3;

        cout << "Average of 1st value is: " << value1_avg << endl;
        cout << "Average of 2nd value is: " << value2_avg << endl;
        cout << "Average of 3rd value is: " << value3_avg << endl;
        cout << "Average of the 3 months is: " << avg_3mth << endl;

	return 0;

}