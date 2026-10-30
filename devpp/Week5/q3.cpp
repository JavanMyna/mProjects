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
 type = 'E';
 height=10;
 radius=5;


double base, slanted;

switch(type) {
    case 'a':
    case 'A':
    cout << "Given prism "<< type<< " is Cube." << endl;
    cout << "Length provided: " << length << endl;
    area = pow(length, 2) * 6.0 ;
    volume = pow(length, 3);
    cout << "The area of the cube is: " << area << endl;
    cout << "The volume of the cube is: " << volume << endl;
    break;

    case 'b':
    case 'B':
    cout << "Given prism "<< type<< " is Cuboid." << endl;
    cout << "Provided length: " << length << ", width: " << width << " and height: " << height<< endl;
    area = 2*(length * width) + 2*(length * height) + 2*(height * width);
    volume = length * width * height;
    cout << "The area of the cube is: " << area << endl;
    cout << "The volume of the cube is: " << volume << endl;
    break;
//fixed << setprecision(3) << 
    case 'c':
    case 'C':
    cout << "Given prism "<< type<< " is Right Triangle Prism." << endl;
    cout << "Provided length: " << length << ", width: " << width << " and height: " << height << endl;
    
    slanted = sqrt(pow(height, 2) + pow(width, 2));
    area = width*length + height*length + 2*(0.5*(height*width)) + slanted*length; //it multiplies by lengthhhhh not width
    volume = 0.5*(height*width)*length;

    cout << "The area of the right triangle prism is: " << fixed << setprecision(3) << area << endl;
    cout << "The volume of the right triangle prism is: " << fixed << setprecision(3) << volume << endl;

    break;

    case 'd':
    case 'D':
    cout << "Given prism "<< type<< " is Square-based Pyramid." << endl;
    cout << "Provided length: " << length << " and height: " << height << endl; 

    base = pow(length, 2);
    volume = ( base*height ) / 3;
    slanted = 0.5 * length * sqrt(pow(height,2) + pow(length/2.0, 2));//since length is originally int, gotta make 2 into 2.0 
    area = slanted*4 + base;

    cout << "The area of the pyramid is: " << fixed << setprecision(3) << area << endl;
    cout << "The volume of the pyramid is: " << fixed << setprecision(3) << volume << endl;


    break;

    case 'e':
    case 'E':
    cout << "Given prism "<< type<< " is Cylinder." << endl;
    cout << "Provided height: " << height << " and radius: " << radius << endl;
    
    area = 2* (PI*pow(radius, 2) ) + (2*PI*radius)*height;
    volume = height * (PI*pow(radius, 2));

    cout << "The area of the cylinder is: " << fixed << setprecision(3) << area << endl;
    cout << "The volume of the cylinder is: " << fixed << setprecision(3) << volume << endl;

    
    break;

    default:
    cout << "Please input valid type." << endl;
    break;
}


        //type your answer in the answer box for code within this section only 
        return 0;
} 