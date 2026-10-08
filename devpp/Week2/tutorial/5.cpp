#include <iostream>
using namespace std;

//convert lengths from feet to meters
//len f2m, len2 m2f
//1m = 3.281ft
//1f = 0.3048m
double feet2metre(int length_ft);
double metre2feet(int length_m);

int main() {
    int len = 12; //10ft = ?m
    int len2 = 15; //10m = ?ft

    /* maybe next time after we learn functioni
    double len_m = feet2metre(len);
    double len2_ft = metre2feet(len);
    */

    double len_m = len * 0.3048;
    double len2_ft = len2 * 3.281;

    cout << len << "ft in m is: " << len_m << "m.\n";
    cout << len2 << "m in ft is: " << len2_ft << "ft.\n";
    //lol i forgot to make it so that its reusable if len or len2 is changed. At first I fixed it at 10, so yeah, good thing to know    

    return 0;
}

/* we need it simpler bc it wants it to fit inside the main program
double feet2metre(int length_ft) {
        double length_m = length_ft * 0.3048; 
        return length_m;   
    }

double metre2feet(int length_m) {
        double length_ft = length_m * 3.281;
        return length_ft; 
    }
*/

