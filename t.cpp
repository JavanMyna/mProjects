
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <limits>
using namespace std;
auto declared_auto(double x);
int main(){
    cout << "div0=" << 8.848/0 << "\n";
    cout << "round-12.5=" << round(-12.5) << " round12.5=" << round(12.5) << "\n";
    cout << "trunc=" << (int)(-2.7) << " " << (int)(2.7) << "\n";
    cout << "prec2=" << setprecision(2) << 2.0196 << " fixed=" << fixed << setprecision(2) << 2.0196 << "\n";
    string s = "04";
    cout << "substr=" << s.substr(0,5) << "\n";
    cout << "stoi04=" << stoi("04") << "\n";
    cout << "maxint=" << numeric_limits<int>::max() << "\n";
}
auto declared_auto(double x){ return x*2; }
