#include <iostream>  //11am 07/10/2026
#include <string>
using namespace std;

// Input : (length) (width)
// Process : math(l*w) math(2l + 2w)
// Output : (area) (perimeter) (s/r)

double findArea(int length, int width);
double findPerimeter(int length, int width);
string compareShape(int length, int width);

int main(){
	int length, width; //Its better to put double in this
	string shape;

	cout << "Enter length value (m): ";
	cin >> length;
	cout << "Enter width value: (m): ";
	cin >> width;

	double area = findArea(length, width);
	int perimeter = findPerimeter(length, width);
	shape = compareShape(length, width);

	cout << "Area value: " << area << "m" << endl;//oops this mb, its m^2
	cout << "Perimeter value: " << perimeter << "m" << endl;
	cout << "Shape is a " << shape << endl;
	return 0;
}

double findArea(int length, int width) {
	double area;
	area = length * width;
	return area;
}

double findPerimeter(int length, int width) {
	int perimeter = 2*length + 2*width; //gotta stay consistent, this line should be double
	return perimeter;
}


string compareShape(int length, int width) {
	if (length == width) {
		return "Square";
	} else {
		return "Rectangle";
	}
}
//11:56am, done in 20 mins