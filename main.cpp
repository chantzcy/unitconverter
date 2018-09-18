#include <iostream>
#include <string>
/*
 * Centimeters to - centimeters, inches, feet, yards, meters, miles
 * Inches to - centimeters, inches, feet, yards, meters, miles
 * Feet to - centimeters, inches, feet, yards, meters, mil
 * 
 */
using namespace std;

int main() {
    string user_convert_from_unit;

    cout << "Would you like to convert to: inches, yards, feet, miles, meters, or centimeters? ";
    string user_convert_to_unit;
    cin >> user_convert_to_unit;
    
    
    string inches_one ("inches");
    string inches_two ("inch");
    string inches_three ("in");
    
    
if (user_convert_to_unit == inches_one|| user_convert_to_unit == inches_two|| user_convert_to_unit == inches_three){
        cout << "Okay sweet. And are you converting from centimeters, feet, yards, meters, or miles? ";
        cin >> user_convert_from_unit;
            if (user_convert_from_unit == "centimeters"|| user_convert_from_unit == "cm"|| user_convert_from_unit == "centimeter"){
                cout << "Enter centimeter total: ";
                double centimeters_to_inches_entry;
                cin >> centimeters_to_inches_entry;
                const double centimeters_to_inches_const {.393701};
                cout << "You entered " << centimeters_to_inches_entry << " centimeters. This is is same as " << centimeters_to_inches_entry * centimeters_to_inches_const << " inches. ";
        }
            else if (user_convert_from_unit == "yards"|| user_convert_from_unit == "yards"|| user_convert_from_unit == "yds"){
                cout << "Enter yardage total: ";
                double yards_to_inches_entry;
                cin >> yards_to_inches_entry;
                const double yards_to_inches_const {36};
                cout << "You entered " << yards_to_inches_entry << " yards. This is the same as " << yards_to_inches_const * yards_to_inches_entry << " inches. ";
            }
            else if (user_convert_from_unit == "feet"|| user_convert_from_unit == "foot"|| user_convert_from_unit == "ft"){
                cout << "Enter total feet: ";
                double feet_to_inches_entry;
                cin >> feet_to_inches_entry;
                const double feet_to_inches_const{12};
                cout << "You entered " << feet_to_inches_entry << " feet. This is the same as " << feet_to_inches_entry * feet_to_inches_const << " inches. ";
            }
            else if (user_convert_from_unit == "meters"|| user_convert_from_unit == "meter"|| user_convert_from_unit == "m"){
                cout << "Enter total meters: ";
                double meters_to_inches_entry;
                cin >> meters_to_inches_entry;
                const double meters_to_inches_const {39.3701};
                cout << "You entered " << meters_to_inches_entry << " meters. This is the same as " << meters_to_inches_const * meters_to_inches_entry << " inches. ";
            }
            else if (user_convert_from_unit == "miles"|| user_convert_from_unit == "mile"|| user_convert_from_unit == "mi"){
                cout << "Enter total mileage: ";
                double miles_to_inches_entry;
                cin >> miles_to_inches_entry;
                const int miles_to_inches_const {63360};
                cout << "You entered " << miles_to_inches_entry << " miles. This is the same as " << miles_to_inches_const * miles_to_inches_entry << " inches. ";
            } 
else {
    cout << "Error. Please try running program again. Be sure unit spelling is correct.";
}   
}
    return 0;

}