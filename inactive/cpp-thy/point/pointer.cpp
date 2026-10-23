#include <iostream>

/*
int main() {
    int original = 10;
    int& ref = original; // 'ref' is now just an alias for 'original'

    ref = 20; // 'original' is now 20
    //Ohhh its adding & is like using the gorebox godtool to chain ref and original together, so lets say if ref goes 10 steps back, the original too is now 10 steps back. Mathematically logic. 
    //Eh if i cant use int& ref';

    return 0;
}
*/

//what the hell does void even mean, Is it like function? 

void make_absolute(int& n) {
    if (n < 0) {
        int absolute = n*-1;
    }
}
//so void are functions without returns huh, why. Why would we need void, what convenience does it give?
void swap_refs(int& a, int& b) {
    
}

int main() {
    int val = -42;
    int x = 10, y = 20;


    return 0;
}

//WTF IS THAT COMPILE MESSAGE, WHATS -WALL AND WEXTRA AND ALL THAT. WHY NOT JUST clang++
// Okay so I found out, yes u could simply clang++ but -wall and -wextra is like "Yowm, check my code in detail if its aight" the  C++20 thingy is so it writes in the new format instead of 1998 it said hm