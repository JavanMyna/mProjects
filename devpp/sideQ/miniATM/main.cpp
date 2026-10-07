//12:03pm

// First i need to find out how to loop this thing. I think i need to include <iomanip> so i can exit() >> noneeeeed

// Im gonna do what i did in python back then

// loop > while (true) {} and use break to exit.
// features : (Check balance) (Deposit) (Withdraw) (exit)
// Condition : No negative withdrawals, use unsign or error handle
//

// Input : User's choice of action
// Process : 
// Output :

#include <iostream>
#include <string>
using namespace std;

double deposit(double balance);
double withdraw(double balance);

int main() {
    int userChoice;
    double balance = 1000.00;

    while (true) {

        cout << "\n\n===== MYNBANK ATM =====\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nEnter number(1-4): ";
        cin >> userChoice;
        if (userChoice == 4) {
            cout << "\nThank you for using MynBank!" << endl;
            break;
        } else if (userChoice == 1) {
            cout << "\nBalance: RM" << balance;
        } else if (userChoice == 2) {
            balance = deposit(balance);
            cout << "\nNew balance: RM" << balance;
        } else if (userChoice == 3) {
            balance = withdraw(balance); //why is my withdraw here red
            cout << "\nNew balance: RM" << balance;
        } else {
            cout << "\nNot an option. Please enter numerical value (1-4)" << endl;
        }

    }

    return 0;
}

/* For some reason I cant make this into a function without it breaking
string newBalance(double balance){
    cout << "New balance: RM" << balance;
}*/

double deposit(double balance) {
    double depositValue;
    cout << "\nEnter amount to deposit(RM): RM";
    cin >> depositValue;
    return balance + depositValue;
}

double withdraw(double balance) {
    double withdrawValue;

    cout << "\nCurrent balance: RM" << balance;
    cout << "\nEnter amount to withdraw(RM): RM";
    cin >> withdrawValue;

    if (withdrawValue < 0) {
        cout << "\nInvalid amount.\n";
        return balance;
    } else if (withdrawValue > balance) {
        cout << "\nAction cannot be done: Insufficient funds to withdraw.\n";
        return balance;
    } 
    return balance - withdrawValue;
     //Oh i dont need else pula sini, it would still work because the first if and else if will catch the error and the one condition not met
}//why is it yellow wiggly underlined here?

// Withdraw cannot be a negative number, try unsigned

//12:25 draft finished

//It doesnt output?? what
// Fixed 12:43pm