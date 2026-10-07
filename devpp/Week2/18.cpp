#include <iostream> 
using namespace std;

int main() {
    char ch;
    //whats .get() doing here
    cout << "This program has paused. Press Enter to continue.";
    cin.get(ch);
    cout << "It has paused a second time. Please press Enter again.";
    ch = cin.get();
    cout << "It has paused a third time. Please press Enter again.";
    cin.get();
    cout << "Thank you!";
    return 0;
}
//okay so getline(cin, variable) is the one that allows inputting sentences
// wb .get()?? oh only for characters huh.