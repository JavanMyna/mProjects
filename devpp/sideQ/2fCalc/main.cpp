#include <iostream> 
using namespace std;

int add(int a, int b);

int main() {
    int result = add(10, 20);

    cout << "10 + 20 = " << result << endl;
    
    return 0;
}

//Wahhhhh so thats what an exe file is for. We link them.
// So like we can make lots of cpp files, compile them into a .o file, then later link them altogether into one single exe file

