// Arrays

#include <iostream>
using namespace std;


int main(){

    const int MAX_NUM = 5;

    int scores[MAX_NUM];

    for(int i = 0; i < MAX_NUM; i++){
        
        cout << "Enter a number between 0-100: " << endl;
        cin >> scores[i];

        while(scores[i] < 0 || scores[i] > 100){
            cout << "Outside of range please re-enter" << endl;
            cin >> scores[i];
        }
    }

    int counter = 0, total = 0;

    for(int num:scores){
        if(num >= 80){
            counter++;
        } else {
            total += num;
        }
    }

    cout << "Then number of scores above 80: " << counter << endl;
    cout << "The total of all scores is: " << total << endl;
    cout << "The average score is: " << total/MAX_NUM;


    return 0;
}