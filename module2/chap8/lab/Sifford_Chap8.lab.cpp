//******************************************************************
// Chapter 8 Lab - Program
// Programmer: Brittany Sifford
// Completed :  10/21/2022
// Status    :  Complete
 
// Description:  This program creates an array of employees reads their hours / hourly pay from a data file and displays the gross pay for each employee
//******************************************************************


#include <iostream> // i/o stream
#include <fstream> // For working with file
#include <iomanip> // i/o manipulators
using namespace std;

int main(){

// Class PayRoll
class PayRoll {

    private: 
    double payRate;
    int hoursWorked;

    public: 
        //Default Constructor
        PayRoll(){
            payRate = 0.00;
        }
        // Set pay rate
        void setRate(double x){
            payRate = x;
        };

        // Set hours worked
        void setHours(int x){
            hoursWorked = x;
        };

        // Function to calculate gross pay
       double grossPay(){
            double gross = (payRate * hoursWorked);
            return gross;
       }

}; // End class

// Setting constant of employees
 const int NUM_OF_EMPLOYEES = 7;

// Creating an array of PayRoll objects
PayRoll employees[NUM_OF_EMPLOYEES];

// Variables to store incoming data
double hours, rate;
// For loop
int i; 

 // Grabbing/Opening File
 ifstream inFile;
 inFile.open("payroll.txt");

 // Check to make sure no errors during file opening
 if(!inFile) {
    cout << "Error opening file" << endl;
 } else {
    // else no errors occurred proceed with reading data
    for( i = 0; i < NUM_OF_EMPLOYEES; i++){
        // Grab data from file to store in vars - Hours are first 
        inFile >> hours >> rate; 
        // Set the hours for current class in array
        employees[i].setHours(hours);
        // Set the rate for current class in array
        employees[i].setRate(rate);
    }
    // For loop has finished we can close the fie
    inFile.close();
 }





// Display OutPut
 cout << "Employee" << "  " << "Gross Pay" << endl;
 cout << "========" << "  " << "=========" << endl;
 // Formatting output
 cout << fixed << showpoint << setprecision(2);
 //Loop and display employees pay
 for(i = 0; i < NUM_OF_EMPLOYEES; i++){
    cout << "   " << (i + 1) << ":" << "    $"; 
    cout <<  setw(7) << employees[i].grossPay() << endl; 
 }

 
  return 0;
}