#include <iostream>
#include <string>
using namespace std;


class Inventory {

    private: 
    string itemCode;
    string description;
    double price;

    public: 
        Inventory(){ // Default Constructor 
            itemCode = "XXX";
            description = " ";
            price = 0.0;
        }
            // 3 Argument Constructor
        Inventory(string c, string d, double p){
            itemCode = c;
            description = d;
            price = p;
        }

        // Add member function setters
        string getCode() const {
            string code = itemCode;
            return code;
        }

        string getDescription() const {
            string d = description;
            return d;
        }

        double getPrice() const {
            return price;
        }

}; // End class declaration


// Function prototype
int search(const Inventory [], int, string);


int main(){
    const int SIZE = 6;

    // Create and intialize the array of Inventory Objects
    Inventory silverware[SIZE] = {
        Inventory("S15", "soup spoon", 2.35),
        Inventory("S12", "teaspoon", 2.19),
        Inventory("K41", "knife", 3.25)
    };

    string desiredCode; // The itemCode to search for
    int pos; // Position of desired object in the array
    char doAgain; // Look up another price (Y/N)?

    do {
        cout << "\n Enter an item code: ";
        cin >> desiredCode;

        // Calling search function for object and storing results in POS
        pos = search(silverware, SIZE, desiredCode);

        if(pos == -1){
            cout << "That code does not exist in the array\n";
        } else {
            cout << "This " << silverware[pos].getDescription() 
            << "costs $" << silverware[pos].getPrice() << endl;
        }

        //Ask to look for another Item
        cout << "\nLook up another price (Y/N)? ";
        cin >> doAgain;

    } while( doAgain == 'Y' || doAgain == 'y');

    return 0;

} // End main


// Search function

int search(const Inventory object[], int size, string value){
    int index = 0;
    int position = -1; // Record positions of element
    bool found = false; // Flag to indicate if value has been found

    while(index < size && !found){

        if(object[index].getCode() == value){ // If value is found
            found = true;
            position = index;
        }
        index++; // Go to next element
    }

    return position;

}