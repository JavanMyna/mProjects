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
    cout << "I'm thinking of a number between 1 and 100!\n"; //so stating this makes it more fun

    actualNum = rand() % 100 + 1; //how do I make it so that it goes in a certain range?
    // %100 makes 347 into 47. But wouldnt srand(time(0)) make it more than 1000?
    while (isRunning) {
        cout << "Enter a random number: ";
        cin >> userNum;

        // Oh woww, error handling
        if (!(cin >> userNum)) {
            cout << "Please enter a valid integer.\n";
            break;
        } //hmmm if i dont have this, it says too low, try again and it loops infinitely

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
}//4:12pm 29oct26 im gonna eat panmee yey > Nope i didnt get panmee. Im gonna rewrite the script

//um not rewrite
// 