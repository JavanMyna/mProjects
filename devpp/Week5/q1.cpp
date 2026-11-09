/*

*/

#include<iostream>
using namespace std;

int main(){
	int x1=2, y1=3, x2=8, y2=6; //declared and assigned by computer.

         //type your answer in the answer box for code within this section only
        double gradient = static_cast<double>(y2 - y1)/(x2 - x1);
        
        if (x1==x2) {
            cout << "Invalid coordinate";
            return 0;
        }
         cout << "Given the first coordinate is (" << x1 << ", " << y1 << ")\n"
             << "And the second coordinate is (" << x2 << ", " << y2 << ")\n"
             << "The gradient is: " << gradient << endl; //why is my gradient )? > because if ur math is done first, its only between int, so later become 0.5 supposedly right, but since its in int, then it becomes 0, only then 0 gets stored in the variable even if u declare variable as double, its the math!
        if (gradient > 0) {
            cout << "The line is slanted to the right." << endl;
        }
        else if (gradient < 0) {
            cout << "The line is slanted to the left." << endl;
        }
        else {
            cout << "The line is horizontal." << endl;
        }

         return 0;
}