#include <iostream>
using namespace std;

int main() {
    int low = 10, high = 30;
    int count = 0;
    cout << "Prime numbers between " << low << " and " << high << ":";
    for (int n = low; n <= high; n++) { //OKay for this one i did the same method
        if (n < 2) continue; //starting from here I got stuck like I fr didnt know what to do
        bool isPrime = true; //is everytime we do prime, using boolean helps? I feel like every prime related questions includes booleans
        for (int d = 2; d * d <= n; d++) { //OKay this one Im not sure what it means. So starts from 2, then d*d less than <= n, why do we need to do that.
            if (n % d == 0) { isPrime = false; break; } //break vs continue, i asked thousand times but kept forgetting
        }
        if (isPrime) { cout << " " << n; count++; } 
    }
    if (count == 0) cout << " None";
    cout << endl << "Total: " << count << endl;

    return 0;
}
//I wanna make sense of this
/*

*/