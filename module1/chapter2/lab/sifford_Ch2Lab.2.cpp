//******************************************************************
// Chapter 2 Lab - Program 2
// Programmer: Brittany Sifford
// Completed : 8/31/2022
// Status    : Complete
//
// The program calculates Height in feet and inches from just inches
//******************************************************************


#include <iostream>
using namespace std;

int main(){

int height = 75, foot = 12; // Height is given value in inches // Foot is 12 inches

int feet = height / foot;  // Calculation to give us total feet
int inches = height % foot; // Calculation to give us feet

cout << "A " << height << " inch tall basketball player is " << feet << " feet " << inches << " inches tall."; // Out putting result to console
return 0;

}