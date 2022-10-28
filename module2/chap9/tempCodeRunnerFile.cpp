#include <iostream>
// using namespace std;

// // Binary search is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(Log n) VS linear search O(n)
 

// // Function prototype
// int binarySearch(const int[], int, int);

// int main(){
//     const int SIZE = 10;

//     //Create an array of ID nums sorted in ascending
//     int IDnums[SIZE] = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50};

//     int empID, // Holds ID to search for
//         result; // Holds search result

//     // Get an employee ID to search for
//     cout << "Enter the employee ID you wish to search for: ";
//     cin >> empID;


//     // Search for ID
//     result = binarySearch(IDnums, SIZE, empID);

//     // Check to see if we found an employee ID
//     if( result == -1){
//         cout << "That ID is not in the array. \n";
//     } else {
//         cout << "ID: " << empID << " was found in element "
//         << result << " of the array.\n";
//     }

//     return 0;
// }


// // Binary Search

// int binarySearch(const int array[], int size, int value) { // The array we are searching, the size of it, and the value we are looking for
// int first = 0, // First element
//     last = size - 1, // Last element
//     middle, // Midpoint of search
//     position = - 1; // Position of search value
// bool found = false; // Flag to indicate if value was found

// while(!found && first <= last){
//     middle = (first + last) / 2; // Calculate midpoint
//     if(array[middle] == value){ // If value is found in middle
//         found = true;
//         position = middle;
//     } else if (array[middle] > value) { // If value is in lower half
//         last = middle - 1; // set last to before middle value
//     } else {
//         first = middle + 1; // Value is in upper half
//     }
// }
//     return position;
// }





