#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

	// Constants
	const double PI = 3.14159;
	const double SLICE = 14.125; // what does this SLICE constant represent? oh the area of ONE slice, we wanna find how much slices we can have depending on its diamter

	double diameter = 37.0;	       // To hold the diameter
	double radius;		      // To hold the radius
	double area;		              // To hold the area
	double slices;		      // To hold the number of slices

        //fill your program in the answer box
    radius = diameter / 2;
    area = PI * pow(radius, 2);
    slices = area / SLICE; 
    cout << "A " <<  fixed << showpoint << setprecision(1) << diameter 
    << " inch pizza contains about " << fixed << showpoint << setprecision(1) << slices << " slices" << endl;

	return 0;


}

/*
cout << fixed << showpoint << setprecision(1)
*/

// Yey fin at 2:29pm of 15oct26, 50/50 100%, 42 mins damn.

//I gotta practice those weird showpoint fixed and setprecision() maneee , lets treat ourselves