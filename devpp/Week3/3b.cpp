// this is if it wants the 2000 people as well

#include <iostream>

int main() {
    std::string icNumber = "040512-14-5567";
    
    // 1. Extract the first two characters as a string
    std::string firstTwoStr = icNumber.substr(0, 2); // "04"
    
    // 2. Convert the string to a number
    int birthYearDigits = std::stoi(firstTwoStr); // 4
    
    std::cout << "As a number: " << birthYearDigits << std::endl;
    int fullBirthYear;

    if (birthYearDigits <= 26) { 
        // If digits are 00 to 26, they were born in the 2000s
        fullBirthYear = 2000 + birthYearDigits; // e.g., 2000 + 4 = 2004
    } else {
        // If digits are 27 to 99, they were born in the 1900s
        fullBirthYear = 1900 + birthYearDigits; // e.g., 1900 + 99 = 1999
    }

    std::cout << "Full Birth Year: " << fullBirthYear << std::endl;
    return 0;
}