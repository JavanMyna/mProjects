#include <iostream>
using namespace std;

// 1 bag = 30 cookies
//  1 bag  = 10 serving. 1 serving = 300 calories
// 10 serving = 30 cookies
// 1 serving = 3 cookies
// 3 cookies = 300 cal
//1 cookie = 100 cal

int main() {
	int cookieAte; 
	
	cout << "How many cookies did you ate?: ";
	cin >> cookieAte;

	int cookieCalory = cookieAte * 100;
	
	cout << "\nYou have eaten " << cookieAte << " cookies" << endl;
	cout << "\nTotal calories consumed: " << cookieCalory << "cal" << endl;

	return 0;
}
