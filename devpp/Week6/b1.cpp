#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int age;
    string name;

    ofstream outfile("info.txt");

    cout << "Enter you name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    outfile << "Name: " << name << endl;
    outfile << "Age: " << age << endl;
    outfile.close();

    return 0;
}