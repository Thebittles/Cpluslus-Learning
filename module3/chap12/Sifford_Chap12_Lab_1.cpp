//******************************************************************
// Chapter 12 Lab Part 1
// Programmer: Brittany Sifford
// Completed :  11/26/2022
// Status    :  Complete
 
// Description:  This program takes input from a user and separates the sentence on CamelCase => Camel case
//******************************************************************

    

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//Prototype
string WordSeperator(char *);


int main(){
 //Variable to store input
 char input[50];

 cout << "Please enter a sentence: " << endl;
 // Grabbing input from the user
 cin.getline(input, 50);

// Displaying output
cout << "Your modified sentence: " << endl;
cout << WordSeperator(input);

    return 0;
}



string WordSeperator(char *ptr){
    // Create a variable for the new string
    string result = "";

    // Loop through original string - test to see if uppercase (know to split)
    for(int i = 0; i < strlen(ptr); i++){

       // We know to add a space when the current letter is lowercase and the next is uppercase
       if( islower(ptr[i]) && isupper(ptr[i + 1]) ) {
        // Change the uppercase to lowercase
        ptr[i + 1] = tolower(ptr[i + 1]);
        // Add just the current character
        result += ptr[i];
        //Add the space to separate the words
        result += " ";

       }  else { // Nothing needs to be done just add the character
         result += ptr[i];
       }

    }

    return result;
}