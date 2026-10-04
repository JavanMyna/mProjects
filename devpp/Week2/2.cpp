#include <iostream>
using namespace std;

int main() {
    double regularPrice = 59.95, discount, salePrice; //I didnt know u can actually do this, all together
    discount = regularPrice * 0.20;
    salePrice = regularPrice - discount;

    cout << "Regular price: $" << regularPrice << endl;
    cout << "Discount amount: $" << discount << endl;
    cout << "Sale price: $" << salePrice << endl;
    return 0;
}