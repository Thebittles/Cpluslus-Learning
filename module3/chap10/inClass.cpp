#include <iostream>
using namespace std;

int * fillArray(int n);

int main(){
    int n;
    int * ptr;

    cout << "How many numbers should we use?  " << endl;
    cin >> n;

    ptr = fillArray(n);

    for(int i = 0; i < n; i++){
        cout << *(ptr + i) << " ";
    }


    return 0;
}


int * fillArray(int n){
    int * arrayPtr = new int [n];
    for(int i = 0; i < n; i++){
        *(arrayPtr + i) = i+1;
    }

    return arrayPtr;
}