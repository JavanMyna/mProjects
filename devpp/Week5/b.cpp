//Not mine, baswara did this
/* 1:50pm
i: (+veValue)
p: (if -ve found, give error), 
o: 
*/

#include <iostream>
using namespace std;

int main() {
    
    for (int i=0;i<128;i++){
        char a = i;
        cout << a;
        if (i > 15 && i % 16 == 0){
            cout << endl;
        }
    }   
    
    return 0;
}