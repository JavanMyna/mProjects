
#include <iostream>
using namespace std;
auto convert(double x);
int main(){
    cout << convert(25.0) << "\n";
}
auto convert(double x){ return x*1.8+32; }
