#include <iostream>
using namespace std;

int main() {
    char letter;
    int i;
    // to do a for loop, its for (start; condition; update) {} scu, saya cayang u :3
    /*for (i=0; i<127; i++) {
        letter = i; 
        cout << i << " : " << letter << endl;
    }*/

    
    letter = 65; // woah thats cool, this outputs as A
    cout << letter << endl;
    letter = 66; //and this output as B
    cout << letter << endl;
    return 0;
}

//g++ h.cpp -o h;if ($?) { ./h} tis is a good knowledge, its like && but in powershell.
// ;if ($?) {}