#include <iostream>
#include <string>
using namespace std;


//input : two primary colors
//process : if-else statements 
//output : secondary color after mixing

int main() {
    string color1, color2, finalColor;

    cout << "Lets mix some colors!\nDo note that primary colors are only:\n- Red\n- Blue\n- Yellow\n\nEnter your first color(all lowercase): ";
    cin >> color1;
    cout << "Enter your first color(all lowercase): ";
    cin >> color2;    

    if (color1=="red" && color2=="blue" || color1=="blue" && color2=="red") {
        finalColor="purple";
    } 
    else if (color1=="red" && color2=="yellow" || color1=="yellow" && color2=="red") {
        finalColor="orange";
    }
    else if (color1=="blue" && color2=="yellow" || color1=="yellow" && color2=="blue") {
        finalColor="green";
    }
    else if (color1 == color2) {
        finalColor=color1;
    }
    else {
        cout << "The color u put isnt a primary color!";
        return 0;
    }                
    
    cout << "Okay so...after mixing color " << color1 << " and color " << color2 << ":\nYou get the color " << finalColor << "!" << endl;
    return 0;
}//fin at 11:03am yeys


//Okay so I didnt think of if we mix two same colors together. 

//Oh i can make it much shorter by using "||" or to join them together like if it just switch place

//I gotta make it a habit to catch error from the first 1st if statement