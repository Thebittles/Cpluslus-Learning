//******************************************************************
// Chapter 2 Lab - Program 1
// Programmer: Brittany Sifford
// Completed : 8/31/2022
// Status    : Complete
//
// This program computes the selling price for a 35% profit on a 8.00$ Item
//******************************************************************


#include <iostream>
using namespace std;

int main(){

   float original_price = 8.00, percentProfit = 0.35; // Original Price given and Percent of desired Profit 

   float newPrice = (original_price * percentProfit) + original_price; // Calculating suggest selling price

    cout << "To have a 35% profit, the flash drive should sell for $" << newPrice; // Out putting result to the console

   return 0;

}