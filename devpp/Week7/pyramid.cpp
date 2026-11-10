//How does one pyramid themselves

#include <iostream>
using namespace std;

int main() {
    int rows = 0;
    //so first its the outside huh. OKay the row, , makes sense since it increases, kinda like triangle too
    for (int i = 1; i <= rows; i++) {
        for (int s = 0; s < rows - i; s++) cout << " "; //okay for what exactly. Whats s. -> the space, what makes it triangle is because it starts from max which is (rows - i)
        
        for (int j = 1; j <= i; j++) cout << j; //counts up, this is actually cool, it does count up, but the second one starts from i-1 because it doesnt wanna include the peak, thats smart!
        for (int j = i - 1; j >= 1; j--) cout << j; //okay this is the part where I dont understand //oh wait this is part c woops, this counts down huh. so like 12321. this is 21
        cout << endl;
    }
    return 0;
}
//so in the end, i need 4 for loops, so that I can count the rows, thats the big one
// Then 1. For space(rows-i) 2. whatever the number you wanna make, O 
