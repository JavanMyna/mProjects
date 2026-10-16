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

const double M_TO_FEET = 3.28

*///850am 13oct2026
//input : temperature(at sea level, in celsius)
//process : (/converts cels to Fahr), (/calculates temperature at different height) (/calc temperature at mount everest) (/calculates height where temperature is 0)
//input : displays the 4 different results

#include <iostream>
using namespace std;

double convert_to_Fahr(double celsiusValue); //why cant i put auto there

int main() {
    double tempCel, tempFahr, temp_Hgt_1k, temp_Hgt_2k, temp_Hgt_3k, temp_mtEverest, tempF_mtEverest, hgt_temp_0, hgtF_temp_0F;
    const double M_TO_FEET = 3.28;

    cout << "Enter temperature value in Celsius at sea level: ";
    cin >> tempCel;

    tempFahr = convert_to_Fahr(tempCel);

    double hgtFt_1km = 1000 * M_TO_FEET, hgtFt_2km = 2000 * M_TO_FEET, hgtFt_3km = 3000 * M_TO_FEET, 
    tempF_Hgt_1k, tempF_Hgt_2k, tempF_Hgt_3k; 

    // tempValue = actualHeight * ( constTemp / constHeight ) ; constHeight can be cut out since its 1
    temp_Hgt_1k = tempCel - 1 * 5;  
    temp_Hgt_2k = tempCel - 2 * 5;
    temp_Hgt_3k = tempCel - 3 * 5; 
    temp_mtEverest = tempCel - 8.848 * 5;
    tempF_mtEverest = convert_to_Fahr(temp_mtEverest) * 1000;
    hgt_temp_0 = tempCel / 5;  
    hgtF_temp_0F = (convert_to_Fahr(tempCel) / 5) * M_TO_FEET;
    tempF_Hgt_1k = convert_to_Fahr(temp_Hgt_1k); 
    tempF_Hgt_2k = convert_to_Fahr(temp_Hgt_2k); 
    tempF_Hgt_3k = convert_to_Fahr(temp_Hgt_3k); 

    cout << "In Fahrenheit this is equal to " << tempFahr << " degrees." << endl; 
    cout << "At 1000m (" <<  hgtFt_1km << " feet) the temperature is " << temp_Hgt_1k << " celsius and " << tempF_Hgt_1k << " fahrenheit.\n";
    cout << "At 2000m (" <<  hgtFt_2km << " feet) the temperature is " << temp_Hgt_2k << " celsius and " << tempF_Hgt_2k << " fahrenheit.\n";
    cout << "At 3000m (" <<  hgtFt_3km << " feet) the temperature is " << temp_Hgt_3k << " celsius and " << tempF_Hgt_3k << " fahrenheit.\n";
    
    cout << "At the Mount Everest, the temperature is " << temp_mtEverest << " celsius and " << tempF_mtEverest << " fahrenheit.\n";
    cout << "The height at which the temperature is 0C: " << hgt_temp_0 << " m\n";
    cout << "The height at which the temperature is 0F: " << hgtF_temp_0F << " feet\n";

    return 0;
}

double convert_to_Fahr(double celsiusValue) {
    double fahrenheitValue;
    return fahrenheitValue = (celsiusValue * 1.8) + 32;
}

//9:13am fin attempt

//diff:
/*
Oh yaa i can just convert from m to feet pula

astaga i couldve just used constant instead of separate function, it be better

wtffffff its divide by 5 lah not times. C yg di atas
*/
/*
Something is terribly wrong oh my god

Enter temperature value in Celsius at sea level: 25
In Fahrenheit this is equal to 77 degrees.
At 1000m (3280 feet) the temperature is 20 celsius and 68 fahrenheit.
At 2000m (6560 feet) the temperature is 15 celsius and 59 fahrenheit.
At 3000m (9840 feet) the temperature is 10 celsius and 50 fahrenheit.
At the Mount Everest, the temperature is -19.24 celsius and -2.632 fahrenheit.
The height at which the temperature is 0C: 5 m
The height at which the temperature is 0F: 50.512 feet
*/