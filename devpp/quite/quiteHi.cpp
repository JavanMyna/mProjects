#include <iostream>

// One that states the number and say it either as a odd or even number
// How would the math looks like here?

// Input : Number
// Process : Checks if it is odd or even
// Output : Display it as odd or even

// How do I loop in cpp? for 

int main() {
	
	//int number = 0;
	//std::cout << "Enter number: ";
	//std::cin >> number;
	int number = 0;
	for (int i = 0; i < 10; i++) {
	number++; //I could just reuse the i, to make it much more easier
	if (number % 2 == 0){
		std::cout << number << " is Even\n";
	} else {
		std::cout << number << " is Odd\n";
	}
	//How do I make it so that, when it divides by 2, it will be caught as an integer. 	
	// Oh modulooo long time no see. Just like Python, we use % to see if theres remainder or not, so if its confirmed an integer, remainder will be 0
    }
	return 0;
}
