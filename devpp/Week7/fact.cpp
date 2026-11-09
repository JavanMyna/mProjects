#include <iostream>
using namespace std;

int main() {
	int f=3;
	int facted = 0, count =1;

	cout << "The number to be evaluated is: " << f << endl;

	if (f > 1) {
		for (int i = 1; i <= f; i *= count) {
			if (i == f) {
				cout << "Number " << f << " is a factorial number for " << count << endl;
				break;
		}	else {
				cout << "Number " << f << " is NOT a factorial number." << endl;
				cout << "The next factorial calculation is " << i << " which is " << count << "!\n";
		}
			count++;
	}
} else if (f == 1) {
	cout << "Number 1 is a factorial number for 0!" << endl;
}

	return 0;
}

/*
cout << "The number to be evaluated is: " << f << endl;

int i = 1, count = 0;          // start at 0! = 1 so f=1 needs no special case

while (i < f) {                // search only
    count++;
    i *= count;
}

if (i == f) {                  // report once
    cout << "Number " << f << " is a factorial number for " << count << "!" << endl;
} else {
    cout << "Number " << f << " is NOT a factorial number." << endl;
    cout << "The next factorial calculation is: " << i << " which is " << count << "!" << endl;
}
*/