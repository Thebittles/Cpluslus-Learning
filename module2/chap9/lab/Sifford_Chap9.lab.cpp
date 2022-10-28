#include <iostream>
#include <string>
#include <iomanip>
using namespace std;



int main(){

 struct Song {
    string title;
    string artist;
 };

 //Set size for array
 const int SIZE = 10;
 // Create the array
  Song Playlist[SIZE];

 //Function to get data from user
 void getData(Song Playlist[], int SIZE);{

    for(int i = 0; i <= SIZE; i++){
        cout << "Song " << i+1 << endl;

        cout << "Enter the tile of the song: \n";
        getline(cin, Playlist[i].title);

        cout << "Enter the artist of the song: \n";
        getline(cin, Playlist[i].artist);
    }
 }// Close getData function


 return 0;
}




// Bubble Sort function 
void bubbleSort(Playlist array[], int SIZE){

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
void swap(Playlist &a, Playlist &b){
    Playlist temp = a;
    a = b;
    b = temp;
}