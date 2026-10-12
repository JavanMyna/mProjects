/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// This program calculates the circumference of a circle.
#include <iostream>
using namespace std;

int main()
{
	// Constants
	const double PI = 3.14159;
	const double DIAMETER = 10.0;

	// Variable to hold the circumference
	double circumference;

	// Calculate the circumference.
	circumference = PI * DIAMETER;

	// Display the circumference.
	cout << "The circumference is: " << circumference << endl;
	return 0;
}
