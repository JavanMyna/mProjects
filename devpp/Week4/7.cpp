//this one looks a little hard so lemme drink my water

//input: "the answer to the addition of the two numbers"
//process: "compares actualAnswer and userAnswer"
//output: "If correct, then give message congratulations" , "if incorrect, give answer is supposed to be...actualAnswer"

//11:06pm lemme try
//11:10 okay lemme take a break, im trynna learn random here. it seems like it looks abit weird
#include <iostream>
//#include <random> this thing is sooo weird, it uses terms i definitely cannot remember like what the heck is mt19937. 
//Ig we doing the old way of using random based on the current time to make seed then assign numbers to it
#include <cstdlib>
#include <ctime> //yk the c infront represent c's. c.c world :0
#include <iomanip>
using namespace std;

int main() {
    int number1, number2, actualAnswer, userAnswer;
    srand(time(0)); //I forgot what the 0 in time mean. i know its not 0 second, maybe something that we're not keeping, no pointer
    

    number1 = 100 + (rand() % 500);
    number2 = 100 + (rand() % 300); //eh if srand isnt even connected, how is rand() generate random numbers? ehhh it doesnt connect

    actualAnswer = number1 + number2;

    cout << right << setw(9) << number1 << endl;
    cout << "+" << right << setw(7) << number2 << endl;
    cout << "_________\n";
    
    cout << "Your answer: ";
    cin >> userAnswer;

    if (userAnswer == actualAnswer) {
        cout << "Congratulations, that is correct!";
    }
    else {
        cout << "Aweee, better luck next time!\nYou put: " << userAnswer << "\nActual answer: " << actualAnswer << endl; 
    }
    return 0;
}

//Sheesh i finished it at 11:29am but omg its so ugly HAHAHA