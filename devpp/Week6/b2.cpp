#include <iostream>
#include <fstream>
using namespace std;

int main() {
    //declare line 
    string line;

    ofstream infile("info.txt");

//check if can open
    if (!infile) {
        cout << "file nonexistent...";
        return 1;
    }

//read all contents using getline


    infile.close();

    return 0;
}
//unfinished lol