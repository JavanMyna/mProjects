/*
input: 3 values(initial, 2nd, how many times)
process: (calc difference),  reject <0 numbers, 
*/

#include <iostream>
using namespace std;

int main() {
	int valueInit=0, value2nd, valueLoop, difference;
	cout << "What shall the first number be?: ";
	cin >> valueInit;

	cout << "The second number?: ";
	cin >> value2nd;

	cout << "How much numbers shall it loop?: ";
	cin >> valueLoop;
	
	difference = value2nd - valueInit;
	for (int i = 0; i < valueLoop; i++) {
		cout << valueInit++ << " ";
} 


	return 0;
}
