#include <iostream>

int main() {

int cent50, cent20, cent10, cent5;

cent50 = change / 50;
cent20 = (change - cent50*50) / 20;
cent10 = (change - cent50*50 - cent20*20) / 10;
cent5 = (change - cent50*50 - cent20*20 - cent10*10) / 5;

cout << "Change: " << change << " sen\n" 
    << "50 sen x " << cent50 << endl
    << "20 sen x " << cent20 << endl
    << "10 sen x " << cent10 << endl
    << "5 sen x " << cent5 << endl; 
  

return 0;
}


/*
int left = change;
int c50 = left / 50; left %= 50; //oh wtf thats much easier. x
int c20 = left / 20; left %= 20;
int c10 = left / 10; left %= 10;
int c5 = left / 5;
cout << "Change: " << change << " sen" << endl;
cout << "50 sen x " << c50 << endl;
cout << "20 sen x " << c20 << endl;
cout << "10 sen x " << c10 << endl;
cout << "5 sen x " << c5 << endl;
*/
