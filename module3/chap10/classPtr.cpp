#include <iostream>
using namespace std;


// class Rectangle {
//     int width, height;
// }

 class Vacation {
    private: 
        string location;
        string feature;
    public:
        Vacation(string loc, string feat){
            location = loc;
            feature = feat;
        }
        string getLocation() { return location; }
        string getFeature() { return feature; }
 };

struct Triangle {
    int base, height;
};




int main(){
    
    
    // Rectangle *pRect; // Pointer to rectangle
    // Rectangle rect; // Rectangle object
    // pRect = &rect; //Assign address to rect

    // //Need to use this
    // (*pRect).width = 24;
    // (*pRect).height = 10;
    // // pRect->width = 24;  Can use this instead of above.

     Triangle *pTri = nullptr;
     Vacation *pVac = nullptr; // Pointer to vacaction

    Triangle tri1;
    pTri = &tri1;

    (*pTri).base = 12;
    pTri->height = 10;

    cout << "Area of the first Triangle is" << endl;
    cout << pTri-> base * pTri->height *.5;

    //Dynamically allocated object access through pointer
    pTri = new Triangle;
    pTri->height = 6;
    pTri->base = 5;

    cout << "Area of the second Triangle is" << endl;
    cout << pTri-> base * pTri->height *.5;
    
    //Delete ptr
    delete pTri;
    pTri = nullptr;

    pVac = new Vacation("Aruba", "Ocean");
    cout << 'The vacation location is ' << pVac->getLocation() << endl;
    cout << 'The vacation feature is: ' << pVac->getFeature() << endl;



    return 0;
}