#include <iostream>
#include <string>

using namespace std;

int main() {
    double centimeters_input;
    double inches_input;
    double inches_to_centimeters {2.54};
    double centimeters_to_inches {.393701};
    string user_input_option {};

    cout << "Would you like to convert inches, or centimeters? (Note: your input will be converted into the option you did not select.) ";
    cin >> user_input_option;
if (user_input_option == "inches"|| user_input_option == "in"|| user_input_option == "inch"){
        cout << "Okay. How many inches would you like to convert to centimeters? ";
        cin >> inches_input;
        cout << inches_input << " is equivalent to " << inches_to_centimeters * inches_input << " centimeters. ";
    }
else if (user_input_option == "centimeters"|| user_input_option == "cm"|| user_input_option == "centimeter"){
    cout << "Okay. How many centimeters would you like to convert to inches? ";
    cin >> centimeters_input;
    cout << centimeters_input << " is the same as " << centimeters_input * centimeters_to_inches << " inches. ";
}
else{
    cout << "Error. Incorrect input detected. Please try again.";
}


    return 0;
}