#include <math.h>  
#include <iostream>
using namespace std;

int litres(double time) {
    double liters;
  
    liters = floor(time * 0.5);
    return liters;
}


int main(){
    
    cout << litres(2) << endl;
    cout << litres(1.4) << endl;

    return 0;
}

