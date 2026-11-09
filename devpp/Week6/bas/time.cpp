#include <iostream>
using namespace std;

int main() {
int hours = totalSeconds / 3600;
int minutes = (totalSeconds - hours*3600) / 60;
int seconds = (totalSeconds - hours*3600 - minutes*60);
    
cout << totalSeconds << " seconds = " << hours << " hour(s) " << minutes << " minute(s) " << seconds << " second(s)"; 

return 0;
}
