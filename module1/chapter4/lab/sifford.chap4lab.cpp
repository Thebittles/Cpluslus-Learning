//******************************************************************
// Chapter 4 Lab - Program
// Programmer: Brittany Sifford
// Completed : 9/16/2022
// Status    : Complete
//
// This program displays a menu  for a medium sound will travel through. Ask user to input distance traveled and displays output of
// time (seconds) it will take based on distance traveled and medium selected. 
//******************************************************************


#include <iostream>
#include <iomanip>
using namespace std;

int main(){

//Declaring constants all based on distance traveled (feet) per second
const int 
    AIR_PER_SECOND = 1100,
    WATER_PER_SECOND = 4900,
    STEEL_PER_SECOND = 16400,
    // Minium distance traveled to compare user input against for validation 
    MIN_DISTANCE_TRAVELED = 0;

    // Menu selection
    int user_selection = 0; 

    // User input
    float amount_traveled,
          amount_time;

    cout << "This program will tell you how long it takes a sound wave" << endl;
    cout << "to travel a specific distance through a particular medium." << endl;
    cout << endl;
    // Display program menu
    cout << "Select a substance for the sound to travel through: " << endl;
    cout << "1. Air" << endl;
    cout << "2. Water" << endl;
    cout << "3. Steel" << endl;
    // Grab user input
    cin >> user_selection;
    // Check to see if selection is valid
    while( user_selection < 1 || user_selection > 3){
        cout << "Please enter a valid menu choice" << endl;
        // If input is invalid grab user input again
        cin >> user_selection;
    }

    cout << "Enter the number of feet the sound will travel through: ";
    cin >> amount_traveled;
    // Check to make sure user input is greater than MIN_DISTANCE_TRAVELED
    while (amount_traveled <= MIN_DISTANCE_TRAVELED) {
        cout << "Please enter a valid number of feet the sound will travel through: " << endl;
        cin >> amount_traveled;
    }

    // Display and calculate outputs based on user selection
    if(user_selection == 1){
        // User selection is air 
        amount_time = amount_traveled / AIR_PER_SECOND;
        cout << "The sound wave will travel " << amount_traveled << " feet through air in " << setprecision(4) << fixed << amount_time << " seconds." << endl;
    } else if( user_selection == 2){
        // User selection is water
        amount_time = amount_traveled / WATER_PER_SECOND;
                cout << "The sound wave will travel " << amount_traveled << " feet through water in " << setprecision(4) << fixed << amount_time << " seconds." << endl;
    } else if (user_selection == 3) {
        // User selection steel
        amount_time = amount_traveled / STEEL_PER_SECOND;
                cout << "The sound wave will travel " << amount_traveled << " feet through steel in " << setprecision(4) << fixed << amount_time << " seconds." << endl;
    } else {
        // Default out put if user selection is not found
        cout << "Menu Choice not found please run program again.";
    }



    return 0;

    
}