#include<iostream>
using namespace std;

int main(){

    int w;
    string day1="hot", day2="hazzy", day3="cloudy";

      // fill your answer in the answer box 
//input : the string of the day
    w = 0;
    if (day1 == "rainy") {
        w += 100;
    }
    else if (day1 == "cloudy") {
        w += 200;
    }
    else if (day1 == "hot") {
        w += 300;
    }
    

    if (day2 == "rainy") {
        w += 10;
    }
    else if (day2 == "cloudy") {
        w += 20;
    }
    else if (day2 == "hot") {
        w += 30;
    }

    
    if (day3 == "rainy") {
        w += 1;
    }
    else if (day3 == "cloudy") {
        w += 2;
    }
    else if (day3 == "hot") {
        w += 3;
    }
    
    cout << "Day 1 is " << day1 << "." << endl;   
    cout << "Day 2 is " << day2 << "." << endl;
    cout << "Day 3 is " << day3 << "." << endl;
    cout << "Then the weather code is: " << w << "." << endl;
    return 0;
}