//******************************************************************
// Chapter 9 Lab - Program
// Programmer: Brittany Sifford
// Completed :  10/28/2022
// Status    :  Complete
 
// Description:  This program grabs 10 artist and songs for a playlist and then displays them to the user.
//******************************************************************


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


 struct Song {
    string title;
    string artist;
 };

//Function Prototypes
 void getData(Song Playlist[], int SIZE);
 void bubbleSort(Song array[], int SIZE);
 void displayData(Song array[], int SIZE);

 //Set size for array
 const int SIZE = 10;


//Main Function
int main(){

 // Create the array
  Song Playlist[SIZE];

 //Call the functions
 getData(Playlist, SIZE);
 bubbleSort(Playlist, SIZE);
 displayData(Playlist, SIZE);

 return 0;
}



////////////////// Functions


//Function to get data from user
 void getData(Song Playlist[], int SIZE){

    for(int i = 0; i < SIZE; i++){
        cout << "Song " << i+1 << endl;

        //Get the artist
        cout << "Enter the artist of the song: \n";
        getline(cin, Playlist[i].artist);
        //Get the title of the song
        cout << "Enter the title of the song: \n";
        getline(cin, Playlist[i].title);

    }
 }// Close getData function




// Bubble Sort function 
void bubbleSort(Song array[], int SIZE){

bool madeSwap = true; // Allows loop to run
 // Start at the end            Greater than 0 and made a swap  Decrement one from maxElement
 for(int maxElement = SIZE - 1; maxElement > 0 && madeSwap; maxElement--){
    madeSwap = false; // No swaps have occurred in the iteration.. yet

    // Nested Loop
    // Starting at the beginning going to maxElement
    for(int i = 0; i < maxElement; i++){
        if(array[i].artist > array[i + 1].artist){
            swap(array[i], array[i + 1]);
            madeSwap = true;
        }
    }
 }

} // End bubblesort



// Swap function
void swap(Song &a, Song &b){
    Song temp = a;
    a = b;
    b = temp;
}




// Display Data
void displayData(Song Playlist[], int SIZE){

cout << "\t" << "Artist" << "\t\t" << "Song" << "\t" << endl;
cout << "=================================================" << endl;
 for(int i = 0; i < SIZE; i++){
    cout << left << setw(20) << Playlist[i].artist << '\t';
    cout << Playlist[i].title << endl;
 }

}

