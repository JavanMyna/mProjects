#include <iostream> 
using namespace std;

int main() {
    int totalSeconds = 36000;

    int minutes, seconds;

    minutes = totalSeconds / 60;

    seconds = totalSeconds % 60;

    cout << totalSeconds << " is equivalent to:\n";
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << seconds << endl;
    return 0;
}
//hmmmm i wanna try the iomanip