//Instead of attending the tutorial, im gonna learn it by my own 
//12Nov26 bro i hope the podcast goes okay later, i dont like disorganized my team is

#include <iostream>
#include <fstream>
#include <string> //A good habit to do everytime i involve string
using namespace std;

int main() {
    ifstream infile;
    infile.open("pets.txt");
    if (!infile) {
        cout << "Couldn't find pets.txt file" << endl;
        return 1;
    }
    int age;
    string name;
    int count = 0; //i forgot to countn
    while (infile >> name >> age) {
        cout << name << " is " << age << " years old" << endl;
        count++;
    }
    cout<< "Total pets: " << count << endl; //forg to add -> What if my infile was never closed back? Or what I perform my cout count after it close, would it forget?
    infile.close();
    return 0;
} //1:30