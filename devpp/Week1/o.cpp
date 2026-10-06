#include <iostream>
using namespace std;


// so what shes saying is that, she really encourages commenting of what the code is doing. Which i enjoy doing
int main() {
    double regularWages,
    basePayRate = 18.25,
    regularHours = 40.0,
    overtimeWages,
    overtimePayRate = 27.78,
    overtimeHours = 10,
    totalWages; // I learned u can actually no need to repetitively put double each one, so cooool


    regularWages = basePayRate * regularHours;

    overtimeWages = overtimePayRate * overtimeHours;

    totalWages = regularWages + overtimeWages;

    cout << "Wages for this week are $" << totalWages << endl;
    return 0;

}
//byeee 6/10/2026 6:25pm