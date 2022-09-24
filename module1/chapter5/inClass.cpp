#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int num_eggs, num_days;

    ofstream outFile;

    outFile.open("eggs.txt");

    cout << "How many days did you gather eggs? ";
    cin >> num_days;

    while(num_days < 0){
        cout << "Please enter a positive number of days: ";
        cin >> num_days;
    }

    for(int i = 0; i < num_days; i++){
        cout << "How many number of eggs did you gather for day: " << i+1;
        cin >> num_eggs;

        while(num_eggs < 0){
            cout << "Please enter positive number of eggs: ";
            cin >> num_eggs;
        }

        outFile << num_eggs << endl;


    }
    outFile.close();
    cout << "Number of eggs written to file.";

    return 0;
}


/* 
Input read data 
ifstream inFile

Write data 
ofstream



*/
