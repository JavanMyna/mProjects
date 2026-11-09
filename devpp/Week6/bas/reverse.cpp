#include <iostream>

int main() {

int reversed = 0, sum = 0, numRef;

numRef = num;
reversed += (numRef % 10)*100;  
numRef /=  10;
reversed += (numRef % 10)*10;
numRef /=  10;
reversed += numRef % 10;     

sum = reversed + num;
cout << "Reversed: " << reversed << endl;
cout << "Sum: " << sum << endl;

return 0;
}
