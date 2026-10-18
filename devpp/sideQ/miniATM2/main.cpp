//Okay im reusing this from miniATM folder, I just wanna practice my iomanip and static cast
//9:10pm, lets stop our thing at 9:30pm

//===============================================
//Im planning for my loyalty_point function
//input : user's withdrawalValue
//process : (every RM10 in wV, point =+ 1, use int to discard fractions )
//output : displays "Loyalty points earned: 12"
//================================================

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double deposit(double balance);
double withdraw(double balance);

int main() {
    int userChoice, points = 0, pointsEarned;
    double balance = 1000.00;

    while (true) {

        cout << setw(12) << "\n===== MYNBANK ATM =====\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nEnter number(1-4): "<< endl;
        cin >> userChoice;
        if (userChoice == 4) {
            cout << "\nThank you for using MynBank!" << endl;
            break;
        } else if (userChoice == 1) {
            cout << setw(10) << "\nBalance: RM" << fixed << setprecision(2) << balance << endl;
            cout << setw(10) << "Current Loyalty points: " << points << endl;
        } else if (userChoice == 2) {
            balance = deposit(balance);
            cout << setw(10) << "\nNew balance: RM" << fixed << setprecision(2) << balance << endl;
        } else if (userChoice == 3) {
            double withdrawValue = withdraw(balance);
            balance = balance - withdrawValue;
            pointsEarned = static_cast<int>(withdrawValue / 10);
            points = points + pointsEarned;
            cout << setw(10) << "\nNew balance: RM" << fixed << setprecision(2) << balance << endl;
            cout << setw(10) << "Loyalty points earned: " << pointsEarned << endl;
            cout << setw(10) << "Current Loyalty points: " << points << endl;
        } else {
            cout << setw(10) << "\nNot an option. Please enter numerical value (1-4)" << endl;
        }

    }

    return 0;
}

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
        return withdrawValue = 0;
    } else if (withdrawValue > balance) {
        cout << "\nAction cannot be done: Insufficient funds to withdraw.\n";
        return withdrawValue = 0;
    }
    return withdrawValue;
}

//9:31pm yeyey fin