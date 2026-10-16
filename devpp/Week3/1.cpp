#include <iostream>
using namespace std;

// 1 bag = 30 cookies
//  1 bag  = 10 serving. 1 serving = 300 calories
// 10 serving = 30 cookies
// 1 serving = 3 cookies
// 3 cookies = 300 cal
//1 cookie = 100 cal

int main() {
	// u gotta include the constants man.
	//3 const with 4 vars. Dayum we only have 2
	const int COOKIES_PER_BAG = 30, SERVINGS_PER_BAG = 10, CALORIES_PER_SERVING = 300;

	const int CALORY_PER_COOKIE = CALORIES_PER_SERVING / (COOKIES_PER_BAG / SERVINGS_PER_BAG);
	
	int cookieAte; 
	
	cout << "How many cookies did you ate?: ";
	cin >> cookieAte;

	int cookieCalory = cookieAte * CALORY_PER_COOKIE;
	
	cout << "\nYou have eaten " << cookieAte << " cookies" << endl;
	cout << "Total calories consumed: " << cookieCalory << "cal" << endl;

	return 0;
}
