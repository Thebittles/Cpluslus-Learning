#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int num_eggs, num_days, total = 0;

    ifstream inFile;

    inFile.open("eggs.txt");

    while(inFile >> num_eggs){
        total += num_eggs;
        num_days++;
    }

    cout << "Total eggs collected for " << num_days << " is: " << total << endl;
    cout << "The average number of eggs collected per day is : " << total / num_days;
    inFile.close();

    return 0;
}


/* 
Input read data 
ifstream inFile

Write data 
ofstream



*/
