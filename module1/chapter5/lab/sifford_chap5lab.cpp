//******************************************************************
// Chapter 5 Lab - Program
// Programmer: Brittany Sifford
// Completed : 9/25/2022
// Status    : Complete

// Description This program grabs the sales for 3 stores and displays a bar graph based on sales per 100.
//******************************************************************
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{

    float store1, store2, store3;
    int i;

    // First store
    do
    {
        cout << "Enter todays sales for store 1: ";
        cin >> store1; // Grab sales for store 1
        if (store1 < 0)
        {                                                           // Check to make sure positive number has been entered
            cout << "Please enter a positive number for store 1: "; // Display output for user to know to enter a positive number
            cin >> store1;                                          // Grab input again
        }
    } while (store1 < 0);

    // Second Store
    do
    {
        cout << "Enter todays sales for store 2: ";
        cin >> store2; // Grab sales for store 2
        if (store2 < 0)
        {                                                           // Check to make sure positive number has been entered
            cout << "Please enter a positive number for store 2: "; // Display output for user to know to enter a positive number
            cin >> store2;                                          // Grab input again
        }
    } while (store2 < 0);

    // Third Store
    do
    {
        cout << "Enter todays sales for store 3: ";
        cin >> store3; // Grab sales for store 3
        if (store3 < 0)
        {                                                           // Check to make sure positive number has been entered
            cout << "Please enter a positive number for store 3: "; // Display output for user to know to enter a positive number
            cin >> store3;                                          // Grab input again
        }
    } while (store3 < 0);

    // Display outputs
    cout << endl;

    cout << setw(15) << "DAILY SALES" << endl;
    cout << setw(17) << "(each * = $100)" << endl;

    // Grab the amount of asterisks that need to be displayed
    store1 /= 100;
    store2 /= 100;
    store3 /= 100;

    store1 = floor(store1);
    store2 = floor(store2);
    store3 = floor(store3);

    // Display store 1
    if (store1 < 1)
    {
        cout << "Store 1: ";
        cout << endl;
    }
    else
    {
        cout << "Store 1: ";
        for (i = 0; i < store1; i++)
        {
            cout << "*";
        };
        cout << endl;
    }

    // Display store 2
    if (store2 < 1)
    {
        cout << "Store 2: ";
        cout << endl;
    }
    else
    {
        cout << "Store 2: ";
        for (i = 0; i < store2; i++)
        {
            cout << "*";
        };
        cout << endl;
    }

    // Display store 3
    if (store3 < 1)
    {
        cout << "Store 3: ";
        cout << endl;
    }
    else
    {
        cout << "Store 3: ";
        for (i = 0; i < store3; i++)
        {
            cout << "*";
        };
        cout << endl;
    }

    return 0;
}