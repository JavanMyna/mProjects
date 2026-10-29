#include <iostream>
using namespace std;

int main() {

    int number;
    bool isPrime = true;//By default we can put it as true so that we can just find the one that CAN actually divide. Its like a two in one

    cout << "Enter number: ";
    cin >> number;

    if (number < 2) {
        isPrime = false;
    } 
    
    else {
        for (int i = number -1; i >= 2; i--) { //This is quite creative. You start from the highest number you put, and slowly work down to the point you can actually divide, instead of bottom up. We go top down.
            if (number % i == 0) {
                isPrime = false;
                cout << number << " is not a prime number and its biggest dividend is " << i << endl;
                break;
            } 
        } 
    }

    if (isPrime){
        cout << number << " is a prime number and it can be divided by its own and 1 only.\n";
    }

   
    return 0;
}

//Holy hell my weakness!

// Wowoww :) Thank you Yikkai, he helped me with this, okay lets see what he did
//Yikkai said Za knows better