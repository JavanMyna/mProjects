/* Week3, number4
As one goes higher up the mountains, the temperature decreases. The rate at which this
occurs is called the lapse rate. The actual value depends on the humidity of the air. We can
easily use the typical value of around 5°C/km or 2.7°F/1000ft.
Write a program that asks the user for the temperature at sea level in degrees Celcius and
displays the following :
The temperature at sea level (for reference) in Fahrenheit.
The temperature at 1000, 2000 and 3000m
The temperature at the top of Mount Everest (8.848 m)
The height at which the temperature is 0°C.
As an additional exercise, show also the temperatures in degrees Fahrenheit and the height
in feet. To convert temperatures in degrees Celcius to degrees Fahrenheit, multiply by 1.8
(or 9/5) and add 32; to convert meters to feet, multiply by 3.28

*///850am 13oct2026
//input : temperature(at sea level, in celsius)
//process : (converts cels to Fahr), (calculates temperature at different height) (calc temperature at mount everest) (calculates height where temperature is 0)
//input : displays the 4 different results

#include <iostream>
using namespace std;

double convert_to_Fahr(double celsiusValue); //why cant i put auto there


int main() {
    double tempCel, tempFahr, temp_Hgt_1k, temp_Hgt_2k, temp_Hgt_3k, temp_mtEverest, hgt_temp_0;

    cout << "Enter temperature value in Celsius at sea level: ";
    cin >> tempCel;

    tempFahr = convert_to_Fahr(tempCel);

    // tempValue = actualHeight * ( constTemp / constHeight ) ; constHeight can be cut out since its 1
    temp_Hgt_1k = 1 * 5;  
    temp_Hgt_2k = 2 * 5;
    temp_Hgt_3k = 3 * 5; 
    temp_mtEverest = 8.848 * 5;
    //hgt_temp_0 = 8.848 / 0; wthhh thats illegal!

    cout << "The temperature at sea level in Fahrenheit: " << tempFahr << "F" << endl;
    cout << "The temperature at...\n1000m: " << temp_Hgt_1k << "C\n2000m: " << temp_Hgt_2k << "C\n3000m: " << temp_Hgt_3k << "C\n"; 
    cout << "The temperature at the top of Mount Everest (8.848m): " << temp_mtEverest << "C\n";
    cout << "The height at which the temperature is 0C: " << hgt_temp_0 << "m\n";

    return 0;
}

double convert_to_Fahr(double celsiusValue) {
    double fahrenheitValue;
    return fahrenheitValue = (celsiusValue * 1.8) + 32;
}

//9:13am fin attempt