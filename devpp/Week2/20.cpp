#include <iostream>
#include <cstdlib> //wooo new library, wahts this, basically unlocking newer tools like rand() exit() atoi() yeah
#include <ctime> //Soo basically like import time in python

using namespace std;

int main() {
    unsigned seed = time(0); //why is 0 in the time, does it mean start from 0? >>Nooo Fred, it means I dont wanna store it anywhere, thats why its 0. usually in the modern times we use nullptr, 
    // why unsigned //Oooo literally the name, no sign, no negative numbers

    srand(seed); //whats srand, whats seed, is it like generating random number
//ooooh s in srand is seed random.
// Oh wow, we have time here so we can make sure the seed are ALWAYS random, zero chance its the same
// Usually theyd have srand(time(0));

    cout << rand() << endl; //why are u underlined red >> bc u forgot the usingnamespacestd;
    cout << rand() << endl;
    cout << rand() << endl;
    
    return 0;
}

//Is this a rng machine