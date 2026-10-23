/*
input: rectangle(length, width)
process: calculate area of rectangle(length * area)
output: 
*/

#include <iostream>
using namespace std;

double askArea() {
    double length, width;

    cout << "Enter length (m): ";
    cin >> length;

    cout << "Enter width (m): ";
    cin >> width;
    double area = length * width;
    return area;
}

int main() {
    double rect1, rect2;

    cout << "Rectangle 1" << endl;
    rect1 = askArea();
    cout << "Rectangle 2" << endl;
    rect2 = askArea();

    if (rect1 == rect2) {
        cout << "Both Rectangle 1 (" << rect1 << "m^2) and Rectangle 2 (" << rect2 << "m^2) are the same.\n";
    }
    else if (rect1 > rect2) {
        cout << "Rectangle 1 (" << rect1 << "m^2) is larger than Rectangle 2 (" << rect2 << "m^2). \n";
    }
    else if (rect2 > rect1) {
        cout << "Rectangle 2 (" << rect2 << "m^2) is larger than Rectangle 1 (" << rect1 << "m^2). \n";
    } 

    return 0;
}

/*
double askArea() {
    double length, width;

    cout << "Enter length (m): ";
    cin >> length;

    cout << "Enter width (m): ";
    cin >> width;
    double area = length * width;
    return area;
}
*/
// 4:12pm yey 12 mins

//WOWWW so u can actually run it beforehand. Oh ya in exams, dont use these ah 