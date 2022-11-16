//******************************************************************
// Chapter 10 Lab A - Program
// Programmer: Brittany Sifford
// Completed :  11/9/2022
// Status    :  Complete
 
// Description:  The program sorts two arrays (even and odd sized) then displays the arrays and their medians
//******************************************************************




#include <iostream>
using namespace std;


//Function Prototypes
void selectionSort(int[], int);
void swap(int &, int &);
void displayArray(int [], int);
double median(int [], int);

int main(){
    //Even sized array
    const int SIZE1 = 10;
    int even[SIZE1] = {17, 32, 45, 68, 99, 101, 67, 89, 22, 27};

    //Odd sized array
    const int SIZE2 = 9;
    int odd[SIZE2] = {17, 32, 45, 68, 99, 101, 67, 89, 22};


    //Sort the Odd array
    selectionSort(odd, SIZE2);
    cout << endl;
    cout << "Median of the Odd Array: " << endl;
    //Display sorted values
    displayArray(odd, SIZE2);
    cout << endl;
    cout << "Median is: " << median(odd, SIZE2);


    cout << endl << endl;


    //Sort the Even array
    selectionSort(even, SIZE1);
     cout << "Median of the Even Array: " << endl;
    //Display sorted values
    displayArray(even, SIZE1);
    cout << endl;
    cout << "Median is: " << median(even, SIZE1);

    return 0;

}   


// Function for sorting arrays in ascending
void selectionSort(int array[], int SIZE){
    int minIndex, minValue;

    for(int i = 0; i < (SIZE - 1); i++){
        minIndex = i;
        minValue = array[i];
        
        for(int j = i + 1; j < SIZE; j++){
            if(array[j] < minValue){
                minValue = array[j];
                minIndex = j;
            }
        }
        swap(array[minIndex], array[i]);

    }
}

//Helper function for sorting
void swap(int &a, int &b)
{
   int temp = a;
   a = b;
   b = temp;
}



// Function for printing array

void displayArray(int *array, int SIZE){
    for(int i = 0; i < SIZE; i++){
        cout << *(array + i) << " ";
    }
}








// Function for Calculating Median
double median(int *array, int SIZE){
    int mid;
    double median;
    //Check to see if length is even/odd
    if(SIZE % 2 == 0){ // If its even - grab center two and average
        mid = SIZE/2;
        median = (( *(array + mid) + *(array + (mid - 1) ))/ 2); 
    } else { // It is odd - just grab middle value
        mid = SIZE  / 2;
        median = * (array + mid);
    }
    return median;
}

