#include <iostream>
using namespace std;

// Function prototype for the linear-search
int linearSearch(const int [], int, int);

int main(){

 const int SIZE = 5;
 int tests[SIZE] = { 97, 75, 98, 100, 82}; // Create an array
 int result; // holds the result

 // Search the array for the value 100 - takes array, size, value looking for
 result = linearSearch(tests, SIZE, 100);

 // If linearSearch return -1, 100 was not found
 if(result == -1){
    cout << "Not tests were found with 100 points.\n";
 } else {
    cout << "You earned 100 points on test ";
    cout << (result + 1) << ".\n"; // Adding 1 because array 0 based index
 }

return 0;

}


// Writing linear search function
int linearSearch(const int array[], int size, int value){
    int index = 0; // Where we start - increase to loop through array
    int position = -1; // Where we will stored the record of position if found else return -1 
    bool found = false; // Flag to indicate if value was found;

    while(index < size && !found  ){ // While index is less than the size of array AND found is false - loop
        if(array[index] == value){ // If the value is found
            found = true; // Set the flag
            position = index; // Set the position to the index it was found at
        }
        index++;
    }
    return position;
}

