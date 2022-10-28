// #include <iostream>
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



























#include <iostream>
#include<string>
#include<cstdio>
using namespace std;
//Structure
struct Song
{
string artist;
string title;
};
//This function takes data from user
void getDataFromUser(Song Playlist[],int Size)
{
cout<<"***********************************Enter Song Details******************************************************"<<endl;
for(int i=0;i<Size;i++)
{
fflush(stdin);
cout<<"Artist of song"<<i+1<<":";
getline(cin,Playlist[i].artist);
fflush(stdin);
cout<<"Title of song"<<i+1<<":";
getline(cin,Playlist[i].title);
}
}
//This function sort the playlist song using selection sort
void sortList(Song Playlist[],int Size)
{

for(int i=0;i<Size;i++)
{
for(int j=i+1;j<Size;j++)
{
if(Playlist[i].artist>Playlist[j].artist)
{
Song temp=Playlist[i];
Playlist[i]=Playlist[j];
Playlist[j]=temp;
}
}
}
}
//This function display the song list
void displaySong(Song Playlist[],int Size)
{
cout<<"********************Song in sorted order with Song no. artist || title *********************************"<<endl;
for(int i=0;i<Size;i++)
{
cout<<"Song"<<i+1<<":"<< Playlist[i].artist <<"||"<<Playlist[i].title<<endl;
}
}
int main()
{
//created 10 object of song
Song Playlist[10];
int Size=10;
//get data from user
getDataFromUser(Playlist,Size);
//sort the song list
sortList(Playlist,Size);
//display the list
displaySong(Playlist,Size);
return 0;
}
//Output