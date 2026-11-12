#include <iostream>
using namespace std;

int main() {
    int n1 = 6, n2 = 4, n3=8;
    int i = n1, j = n2, k=n3;

    while ((k != i && i != j) && k != j) {
        if (i > k) {
            k += n3;
            cout << "k added" << endl;
        } else if (i < k) {
                if (i<j) {
                    i+=n1;
                    cout << "i added" << endl;
                } else if (i>j) {
                    j+=n2;
                    cout << "j added" << endl;
                } else {
                    cout << "else called" << endl;
                }
        }
    }
    
    int lcm = k;  
    cout << "LCM is " << lcm << endl;
    return 0;
}