#include <iostream>
using namespace std;

int main() {
    int rows = 4;        

    for (int i = 1; i<=rows; i++) {
        for (int j = 1; j<=i; j++ ) {
            cout << j;
            if (j<4) { //this one should change from j<4 into j<i because as long as i is bigger...wait what that doesnt make sense, shouldnt it be j<rows?
                //ohh so that makes more sense because memang max j pun based on the i, not row, like first row kan 1 ja, so j < i lah. ataupun c < r. Row ke berapa, supaya teda trailing space.
                cout << " ";
            }
        } 
        cout << endl;
    }
    return 0;
}

/* Model answer
for (int r = 1; r <= rows; r++) {
    for (int c = 1; c <= r; c++) {
        cout << c;
        if (c < r) cout << " ";
    }
    cout << endl;
}
*/