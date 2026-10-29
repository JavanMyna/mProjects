// :)
/*


*/

#include <iostream>
//#include <clibrary> owhhh c standard library bah, cstdlib and also 
#include <ctime> //ohhh time
#include <cstdlib>
using namespace std;


int main() {
    bool isRunning = true;
    int userNum, actualNum;

    //srand() = time(0); //I think lah, lmaooo i failed miserably, so its srand(time(0))
    srand(time(0));
    
    actualNum = rand(); //how do I make it so that it goes in a certain range?
    while (isRunning) {
        cout << "Enter a random number: ";
        cin >> userNum;
        if (userNum < actualNum) {
            cout << "Too low, try again.\n";
        }
        else if (userNum > actualNum) {
            cout << "Too high, try again.\n";
        } else {
            cout << "Congratulations! You found the right answer!" << endl;
            isRunning = false;
        }

    }

    return 0;
}//4:12pm 29oct26 im gonna eat panmee yey