#include <iostream> 
using namespace std;

// Input : (length) (width)
// Process : math(l*w) math(2l + 2w)
// Output : (area) (perimeter) (s/r)

double findArea(int length, int width);
double findPerimeter(int length, int width);

int main(){
	int length, width;

	cout << "Enter length value: ";
	cin >> length;
	cout << "Enter width value: ";
	cin >> width;

	double area = findArea(length, width);
	int perimeter = findPerimeter(length, width);
	
	cout << "Area value: " << area;
	cout << "Perimeter value: " << perimeter;
	return 0;
}

double findArea(int length, int width) {
	double area;
	area = length * width;
	return area;
}

double findPerimeter(int length, int width) {
	int perimeter = 2*length + 2*width;
	return perimeter;
}
