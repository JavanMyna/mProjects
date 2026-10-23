//okay lets start fr 11:50


//i: packageWeight(kg), shipDistance(miles) 
//p: packageWeight(ignore "0 or less" "more than 20kg"), shipDistance(ignore "< 10 || > 3000 miles") 
//o: charges

/* lmao idk why i plan it here
if (shipDistance < 10 || shipDistance > 3000){
    cout << "Distances of less than 10 miles or more than 3,000 miles are unaccepted.\nTheseare the company’s minimum and maximum shipping distances..." << endl;
    return 0;
}
else if (packageWeight = 0 || packageWeight > 20) {
    cout << "Values of 0 or less for the weight of the package are not accepted.\nSame goes to weights of more than 20 kg (this is the maximum weight the company will ship)" << endl;
    return 0;
}
else if (packageWeight>0 && packageWeight=<2) {
    charges = 1.1 * shipDistance;
}
else if (packageWeight>2 && packageWeight=<6) {
    charges = 2.2 * shipDistance;
}
else if (packageWeight>6 && packageWeight=<10) {
    charges = 3.7 * shipDistance;
}
else if (packageWeight>10 && packageWeight=<20) {
    charges = 4.8 * shipDistance;
}    
*/

#include <iostream>
using namespace std;

int main() {
    double shipDistance, packageWeight, charges;

    cout << "Enter weight of package(kg): ";
    cin >> packageWeight;

    cout << "Enter shipping distance(miles): ";
    cin >> shipDistance;

    if (shipDistance < 10 || shipDistance > 3000){
        cout << "Distances of less than 10 miles or more than 3,000 miles are unaccepted.\nTheseare the company’s minimum and maximum shipping distances..." << endl;
        return 0;
    }
    else if (packageWeight <= 0 || packageWeight > 20) { //I forgot to include negative number the first try
        cout << "Values of 0 or less for the weight of the package are not accepted.\nSame goes to weights of more than 20 kg (this is the maximum weight the company will ship)" << endl;
        return 0;
    }
    else if (packageWeight>0 && packageWeight<=2) {
        charges = 1.1 * (shipDistance/500);
    }
    else if (packageWeight>2 && packageWeight<=6) {
        charges = 2.2 * (shipDistance/500);
    }
    else if (packageWeight>6 && packageWeight<=10) {
        charges = 3.7 * (shipDistance/500);
    }
    else if (packageWeight>10 && packageWeight<=20) {
        charges = 4.8 * (shipDistance/500);
    }

    cout << "Package Weight (kg): " << packageWeight << "\nShipping distance: " << shipDistance << endl; //lol i forgot the newline here huhu
    cout << "Charges : $" << charges << endl;
    return 0;
}
//yeyey finish at 12:07pm
//corrected at 12:10pm lemme rest now. gimme a 10 mins break