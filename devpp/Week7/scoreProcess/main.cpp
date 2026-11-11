//Hi from 10:40am in lab 5 haha
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    //read uses in
    ifstream infile;
    infile.open("scores.txt");

    if (!infile) {
        cout << "No scores.txt file to be found";
        return 1;
    }

    string name;
    int number;

    cout << "=== STUDENT SCORE REPORT ===\n\n";
    cout << left << setw(14) << "Name" << "Score" << endl;
    //how do I read and loop, since theres name and number. I kinda dont know how to read it
    //i know we use cin or something but im not sure what

//im missing a infile >> concept oooo
/*
okay so by keyboard we use
cin >> variable right but for files its similar
its
infile >> variable
so cool. What about different thingies then?How to differentiate if its string or int
Ohhhh usually its in a pattern so in here its liike 1 2 1 2, string int string int pattern so we can use the cin

>> name >> score logic so it keeps looping like that i think i can do it now!
*/
/*
while (infile) { //how do i know when to stop?
        infile >> name >> number;
        cout << left << setw(14) << name << number << endl;
    }
*/
//YEYYYY FIRST TIME I DAPAT READ WOOOHA
//But why did it read extra lily
//Woooo the girl i been seeing everywhere talked to me the first time 
// Aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa

//Ooh i can improve it by replacing my inside the while as the one that reads it

    while(infile>>name>>number) {
        cout << left << setw(14) << name << number << endl;
    }

    infile.close();
    return 0;
}
//mission accomplish