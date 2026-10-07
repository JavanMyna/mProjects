#include <iostream>
using namespace std;

int main() {
    int length, width, area;

    cout << "This program calculates the area of a ";
    cout << "rectangle.\n";
    cout << "Enter the length and width of the rectangle ";
    cout << "separated by a space.\n";
    cin >> length >> width; //Ohhh when is this ever useful, why is it like that. I dont like how u have to type in 2 separate numbers like, unguided... How can one make it better?
    area = length * width;
    cout << "The area of the rectangle is " << area << endl;
    return 0;
}