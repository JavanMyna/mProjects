// Calculate average rainfall for 3 months. 
// Input : Name of months(3, string), Amount rain fell(each mth, double)
// Process : Month_spellCheck? , 
// Output : "The average rainfall for June, July and August is x.xx inches."

// 4:30-4:45 challenge

#include <iostream>
#include <string>
using namespace std;

int main() {
    string month1, month2, month3;
    double rainMth1, rainMth2, rainMth3, totalRain;

    cout << "Im going to ask you to put three months, make sure you got the name right okay\n";
    cout << "Month 1: ";
    cin >> month1;
    cout << "How much did it rained? (inches): ";
    cin >> rainMth1;
    cout << "Month 2: ";
    cin >> month2;
    cout << "How much did it rained? (inches): ";
    cin >> rainMth2;
    cout << "Month 3: ";
    cin >> month3;
    cout << "How much did it rained? (inches): ";
    cin >> rainMth3;

    totalRain = rainMth1 + rainMth2 + rainMth3;
    cout << "The average rainfall for " //dont put ; here
    << month1 << "," << month2 << " and " << month3 // or here
    << " is " << totalRain << " inches." << endl;
    return 0;
}

//Yey it does work, but idk what it wants lmao
