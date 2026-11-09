#include <iostream>
using namespace std;

int main() {
int num;

cout << "Here we scan all the digits you put then give u the evenOdd results!";
cout << "Insert number: ";
cin >> num;

int sumEven = 0, digitsOdd = 0, refDigit = num;
if (num<0) {
    cout << "Invalid input." ;
}
else {
    for (int i=num%10; refDigit>0; i=refDigit%10) { //in the condition i keep putting i>0 but its the refDigit yg >0 bruh
        if (i%2==0) {
            sumEven = sumEven + i;
        }
        else {
            digitsOdd++;
        }
        refDigit=refDigit/10;
    }
    cout << "Sum of even digits: " << sumEven << "\nOdd digits: " << digitsOdd << endl;

}
return 0;
}