//******************************************************************
// Chapter 7 Lab - Program
// Programmer: Brittany Sifford
// Completed : 10/11/2022
// Status    :  Complete  
 
// Description: This program grabs a tax rate from a users location and takes the total bill amount from the user and the desired tip %  to calculate a tip. 
//******************************************************************

#include <iostream> // Input/output stream
#include <iomanip>	// Stream manipulator
using namespace std;

// Declare class
class Tips
{
private:
	double taxRate;

public:
	// Constructor
	Tips(double x)
	{
		taxRate = x;
	}

	// Function to compute tip
	double computeTip(double bill, double tipRate)
	{
		// Create a variable for before tax rate was applied to the bill, and a variable for tip amount
		double billBeforeTax, tipAmount;
		// Calculate before tax amount
		billBeforeTax = (bill - (bill * taxRate));
		// Calculate tip 
		tipAmount = (billBeforeTax * tipRate);

		return tipAmount;

	}
};


int main()
{
	// Variable to hold the input tax rate from the user
	double tax;
	// Variable to hold the input for the bill amount and tip rate
	double bill, tipRate;
	// Variable to hold user answer to sentinel 
	char choice = 'y';

	cout << fixed << setprecision(2);

	cout << "This program will compute a restaurant tip based on total " << endl;

	cout << "bill amount and the % the patron wishes to tip the server. " << endl;

	cout << "Enter Tax % for this location: ";
	// Grab tax from user
	cin >> tax;

//Input validation
	while (tax <= 0)
	{
		cout << "Please enter a tax % greater than 0" << endl;
		cin >> tax;
	}

	// Format Tax rate - User enters 5 but should be 0.05
	tax = (tax / 100);


	while(choice == 'y' || choice == 'Y'){


	// Creating space in the terminal
	cout << endl;
	// Display
	cout << "************* Tip Helper ************" << endl;

	// Grab bill amount from user
	cout << "Enter total bill amount: ";
	cin >> bill;

	// Grab the tip % from user
	cout << "Enter desired tip %: ";
	cin >> tipRate;
	cout << endl;

	// Double check tipRate is greater than 0
	while (tipRate < 0){
		cout << "You must enter a tip % greater than 0: ";
		cin >> tipRate;
	}
	// Format the tip rate
	tipRate = (tipRate / 100);

	cout << tipRate << "I am the tip rate...";


	// Create instance of Tips Class
	Tips obj(tax);
	// Display output
	cout << "The tip should be $" <<  obj.computeTip(bill, tipRate);

	cout << endl;
	// Ask the user to input choice to calculate tip again
	cout << "Compute another tip? (Y/N)? : ";
	// Grab the choice from the user
	cin >> choice;


	};


	return 0;
}