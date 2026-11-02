#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){

	const float PI= 3.14159; // declared by computer
	int length=0, width=0, height=0, radius=0; //set by computer
	float area=0.0, volume=0.0; //use this variables to calculate your answer
	char type; //variable for prism type. Use this variable

        cout << "Which prism you wanted to calculate: \n";
	cout << "*********************************************************\n";
	cout << "** A ||a - Cube                        **\n";
	cout << "** B ||b - Cuboid                      **\n";
	cout << "** C ||c - Right Triangle Prism        **\n";
	cout << "** D ||d - Squared-based Pyramid       **\n";
	cout << "** E ||e - Cylinder                    **\n";
	cout << "*********************************************************\n";

//

    //cin >> type; //this line is assigned by computer, do not type this
cout << fixed << setprecision(2); //wow this one makes it default for everything, thats so cool.
switch (type) {
    case 'A': case 'a':
        cout << "Given prism is Cube." << endl;
        area = 6 * length * length;
        volume = length * length * length;
        break;
    case 'B': case 'b':
        cout << "Given prism is Cuboid." << endl;
        area = 2 * (length * width + length * height + width * height);
        volume = length * width * height;
        break;
    case 'C': case 'c':
        cout << "Given prism is Right Triangle Prism." << endl;
        area = width * height + length * (width + height + sqrt(width * width + height * height));
        volume = 0.5 * width * height * length;
        break;
    case 'D': case 'd':
        cout << "Given prism is Square-based Pyramid." << endl;
        area = length * length + 2 * length * sqrt((length / 2.0) * (length / 2.0) + height * height);
        volume = length * length * height / 3.0;
        break;
    case 'E': case 'e':
        cout << "Given prism is Cylinder." << endl;
        area = 2 * PI * radius * (radius + height);
        volume = PI * radius * radius * height;
        break;
    default:
        cout << "Invalid choice." << endl;
}
if (type == 'A' || type == 'a' || type == 'B' || type == 'b' || type == 'C' || type == 'c' ||
    type == 'D' || type == 'd' || type == 'E' || type == 'e') {
    cout << "The surface area is: " << area << endl;
    cout << "The volume is: " << volume << endl;
}

        //type your answer in the answer box for code within this section only 
        return 0;
} 