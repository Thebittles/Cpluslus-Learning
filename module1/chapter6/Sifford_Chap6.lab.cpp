//******************************************************************
// Chapter 6 Lab - Program
// Programmer: Brittany Sifford
// Completed :  10/01/2022
// Status    : Complete

// Description:  This program gets the sales for 4 divisions and then calculates which division had the highest sales.
//******************************************************************




#include <iostream> //cin cout
#include <iomanip> // manipulatiors
#include <string> // Strings
using namespace std; 

// Prototypes
double getSales(string);
void findHighest(double, double, double, double);

int main(){

// Defining divisions
double northEast, southEast, northWest, southWest;

// Calling get sales for each division  // result of get sales will be assigned to the listed variables
//East
 northEast = getSales("Northeast");
 southEast = getSales("Southeast");
 //West
 northWest = getSales("Northwest");
 southWest = getSales("Southwest");


// Calling findHighest - Must pass arguments in correct order
findHighest(northEast, southEast, northWest, southWest);

return 0;

}

// Get sales take's a division name it will return a double 
double getSales(string division){
    // value will be stored in sales and return to the main function
    double sales; 

    // Grab the input from user
    cout << "Enter the quarterly sales for the " << division << " division: " << endl;
    cin >> sales;

    // Input validation
    while(sales < 0) {
        cout << "Sales can not be a negative number. " << endl;
        cout << "Please enter the sales again: " ;
        // Grab input from user
        cin >> sales;
    }

    return sales;
}

// Going to take 4 doubles aka each divisions sales
void findHighest(double northEast, double southEast, double northWest, double southWest){

    //Checking if Northeast is highest first
    if(northEast > southEast && northEast > northWest &&  northEast > southWest){
        cout << "The Northeast division has the highest sales this quarter." << endl;
        cout << "Their sales were " << fixed << setprecision(2) << "$" <<  northEast;
        // Checking for Southeast

    } else if (southEast > northEast && southEast > northWest && southEast > southWest) {
        cout << "The Southeast division has the highest sales this quarter." << endl;
        cout << "Their sales were " << fixed << setprecision(2) << "$" <<  southEast;

        // Checking for Northwest
    } else if (northWest > northEast && northWest > southEast && northWest > southWest){
        cout << "The Northwest division has the highest sales this quarter." << endl;
        cout << "Their sales were " << fixed << setprecision(2) << "$" <<  northWest;
        // All other have been checked southWest had the highest
    } else  {
        cout << "The Southwest division has the highest sales this quarter." << endl;
        cout << "Their sales were " << fixed << setprecision(2) << "$" << southWest;
    }

}