//******************************************************************
// Chapter 10 Lab B - Program
// Programmer: Brittany Sifford
// Completed :  11/11/2022
// Status    :  Complete
 
// Description:  This program gets the number of students and a creates an array based on the response. The program then loops and ask the user to enter # of movies watched for each student and displays the average
//******************************************************************

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototypes
void getData(int *, int);
void selectionSort(int *, int);
void swap(int &, int &);
void displayData(int *, int);
double average(int *, int );


int main(){

    int  *numMoviesWatch, numOfStudents;

    //Grab the num of students
    cout << "Enter the number of students: " << endl;
    cin >> numOfStudents;

    //Validate  input and that the user has entered a positive number of students
    while(numOfStudents < 1){
        cout << "Number of Students must be a positive number and greater than 0" << endl;
        cin >> numOfStudents;
    }

    //Create the array
    int numMoviesWatch = new [numOfStudents];

    //Calling the get data function
    getData(numMoviesWatch, numOfStudents);
    // Sorting the data
    selectionSort(numMoviesWatch, numOfStudents);

    //Display data after it is sorted
    displayData(numMoviesWatch, numOfStudents);

    cout << endl;
    // Calculating Average
    cout << "Average is: " << fixed << showpoint << setprecision(2) << average(numMoviesWatch, numOfStudents) << endl;


    return 0;
}


 void getData(int *array, int SIZE){
    //Loop through each student and get the num of movies watched
    for(int i = 0; i < SIZE; i++){
        cout << "Enter the number of movies watched by student" << i + 1 << endl;
        cin >> *(array + i);

        while(*array + i < 0){
            cout << "Please enter a positive number for movies watched" << endl;
            cin >> array[i];
        }
    }
 }



// Function for sorting arrays in ascending
void selectionSort(int *array, int SIZE){
    int minIndex, minValue;

    for(int i = 0; i < (SIZE - 1); i++){
        minIndex = i;
        minValue = *(array + i);
        
        for(int j = i + 1; j < SIZE; j++){
            if(*(array + j) < minValue){
                minValue = *(array + j);
                minIndex = j;
            }
        }
        swap(*(array + minIndex), * (array + i) );

    }
}

//Helper function for sorting
void swap(int &a, int &b)
{
   int temp = a;
   a = b;
   b = temp;
}


// Display data function
void displayData(int *array, int SIZE){
    cout << "The number of movies watched by each students sorted" << endl;
    for(int i = 0; i < SIZE; i++){
        cout << *(array + i) << " ";
    }

}

// Calculate average function
double average(int *array, int SIZE){
    double total = 0;
    double result;

    for(int i = 0; i < SIZE; i++){
        total += *(array + i);
    }
    result = (total / SIZE);

    return result;
}