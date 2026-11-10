#include <iostream>
using namespace std;

int main() {
    int rows = 4;

    for (int i = 1; i <= rows;i++) {
        for (int s=0; s>rows -1; s++) cout << " "; //sumn wrong here
        for (int j=1; j<= rows - i + 1; j++) cout << j;
        for (int j=rows-1; j>0; j--) cout << j;
        cout << endl;
    } 

    return 0;
}