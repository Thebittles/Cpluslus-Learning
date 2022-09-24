//******************************************************************
// Chapter 3 Lab - Program
// Programmer: Brittany Sifford
// Completed : 9/10/2022
// Status    : Complete
//
// This program calculates the property tax by taking the property value and multiplying it by the assessed rate to get assessed value
// Takes the tax rate per 100$ of the assessed value and displays the property tax. 
//******************************************************************

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Declaring variables used
	const float ASSESSED_RATE = 0.60;
	const int TAX_PER = 100;
	float tax_rate;
	double actual_value, assessed_value, property_tax;

	// Grabbing property value from user
	cout << "Enter the actual property value: $";
	cin >> actual_value;

	// Grabbing tax_rate from user per 100$ of assessed value
	cout << "Enter the amount of tax per $100 of assessed value: $";
	cin >> tax_rate;
	cout << endl;

	// Calculating assessed_value by multiplying assessed_rate by actual_value
	assessed_value = ASSESSED_RATE * actual_value;
	// Calculating property tax by dividing assessed value by TAX_PER then multiplying by tax rate. 
	property_tax = (assessed_value / TAX_PER) * tax_rate;

	// Formatting and displaying output
	cout << fixed << setprecision(2);
	cout << "Property Value: " << "$" << setw(10) << actual_value << endl;
	cout << "Assessed Value: " << "$" << setw(10) << assessed_value << endl;
	cout << "Property Tax: " << setw(3) << "$" << setw(10) << property_tax << endl;

	return 0;
}