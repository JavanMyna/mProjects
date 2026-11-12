#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream infile;
    infile.open("menu.txt");
    string name;
    double number1; //oh yakan initially i put number2 as double but i didnt read clearly, int is better for it
    int count=0, number2; //and also better naming convention would be nice heh
    if (!infile) {
        cout << "menu.txt not found" << endl;
        return 1;
    }
    while (getline(infile, name, '\t')) {//what if i dont have 't' here
        infile >> number1 >> number2; // so it just looks at the number huh, it only collects number, skips the name earlier
        //eh or is it just a different way to loop in a file, because this one involves a getline hm
        infile.ignore(1000, '\n'); //this one idk why it includes but it says it throws away the nonexisting empty spave what makes the 1000 I wonder
        cout << name << " - RM" << number1 << " - " << number2 << " left" << endl;
        count++;
    }
    cout << "Total items on menu: " << count << endl;;
    infile.close();
    return 0;
} //1:42pm