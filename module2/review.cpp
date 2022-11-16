#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Prototype

int main()
{

    return 0;
}

// Question 5
// double totalArr(double sales[][10]){
//   double total = 0;

//   for(int i = 0; i < 8; i++){
//     for(int j = 0; j < 10; j++){
//         total += sales[i][j];
//     }
//   }
//   return total;
// }

// Question 6

// const int SIZE = 20;
// string names[SIZE];

//  for(int i = 0; i < SIZE; i++){
//     names[i] = "Sirius Black";
//  }

// 7.	The arrays array1 and array2 each hold 25 integer elements.  Write code that copies the values in array1 to array2.

// int array1[25], array2[25];

// for(int i = 0; i < 25; i++){
//     array2[i] = array1[i];
// }

// 8.	In a program you need to store the identification numbers of 10 employees (as ints) and their weekly gross pay (as doubles).

// a.	Define two arrays that may be used in parallel to store the 10 employee identification numbers and 10 weekly gross pay amounts

// b.	Write  a loop that uses these arrays to print each employee's identification number and weekly gross pay.

// int emp_ID[10];
// double emp_pay[10];
// for (int i=0; i < 10; i++)
//  {
//  cout << "Employee ID: "<<emp_ID[i] << endl;
//  cout << "Gross Pay: " <<emp_pay[i] << endl;
//  }

// 9.	Rewrite the code for Problem 8 to define and use an array of Payroll structures instead of two parallel arrays.  A Payroll structure should hold an employee ID and weekly gross pay amount.

// struct Payroll = {
//     int emp_ID;
//     double emp_pay;
// };

// Payroll employees[10];

// for (int i=0; i < 10; i++) {
//  cout << "Employee ID: "<< employees[i].emp_ID << endl;
//  cout << "Gross Pay: " << employees[i].emp_pay << endl;
//  }

// 10.

//  double sumPayroll(Payroll employees[], const int SIZE){
//     double total = 0;

//     for(int i = 0; i < SIZE; i++){
//         total += employees[i].emp_pay;
//     }
//     return total;
//  }

// 11.

// Rectangle array[5];
// array[2].setLength(10);
// array[2].setWidth(5);

// 12.

// Bubble sort normally has to make many data exchanges to place a value in its correct position. Selection
// sort determines which value belongs in the position currently being filled with the correctly ordered next
// value and then places that value directly there.

// Selection sort performs a smaller number of swaps compared to bubble sort; therefore, even though both sorting methods are of O(N2), selection sort performs faster and more efficiently!

// 13.

// 13.	Assume that empName and empID are two parallel arrays of size numEmp that hold employee data.
//  Using a bubble sort, write the code that will sort the empID array in ascending ID number order, such that the two arrays remain parallel.
//  That is, after sorting, for all indexes in the arrays, empName[index] must still be the name of the employee whose ID is in empID [index].

const int numEmp = 5;
string empName[numEmp] = {"John", "Sam", "Mary", "Anna", "Ali"};

int empID[numEmp] = {17, 320, 444, 890, 101};

bool swap;
long temp;

string tempstr;

do
{
    swap = false; // There have been no swaps yet on this pass

    for (int count = 0; count < (numEmp - 1); count++)
    {
        if (empID[count] > empID[count + 1])
        {
            temp = empID[count];
            empID[count] = empID[count + 1];
            empID[count + 1] = temp;
            tempstr = empName[count];
            empName[count] = empName[count + 1];
            empName[count + 1] = tempstr;
            swap = true;
        }
    }
} while (swap); // While there was a swap on the previous pass



// 14.
int location = 0;
bool found = false;

while (found == false)
{
    if (array[location++] == 345)
        found = true;
    cout << "found";
}

////////////

while (found == false)
{
    location += 1 if (array[location] == 345)
        found = true;
    cout << "found";
}

///////////////
const int SIZE = 10;
int array[SIZE] = {101, 142, 147, 189, 199, 345, 222, 234, 289, 296};
int index = 0;
bool found = false;

while (!found && index < SIZE)
{
    if (array[index++] == 345)
        found = true;
}
if (found)
{
    cout << "Number 345 was found";
}
else
{
    cout << "Number 345 was not found";
}

// 15.

// processArray(numbers, SIZE);

// 16.
// This program creates a Car class and uses it to simulate
// an accelerating and braking Car object.

#include <iostream>
#include <string>
using namespace std;
// Car class declaration
class Car
{
private:
    int year;    // Model year of the Car
    string make; // Make of the Car
    int speed;   // Current speed of the Car (mph)

public:
    // Constructor with default parameters
    Car(int y = 2013, string m = "Unknown")
    {
        year = y;
        make = m;
        speed = 0;
    }
    // Accessors (i.e. "get" functions)
    int getYear()
    {
        return year;
    }
    string getMake()
    {
        return make;
    }
    int getSpeed()
    {
        return speed;
    }
    // Mutators
    void accelerate()
    {
        speed += 5;
    }
    void brake()
    {
        if (speed >= 5)
            speed -= 5;
        else
            speed = 0;
    }
};
// ************************* main ***************************
int main()
{
    Car hotRod(2013, "Mazda"); // Create a Car object
    // Describe the car (This line was not required by the problem specs.)
    cout << "I'm in my " << hotRod.getYear() << " "
         << hotRod.getMake() << " hot rod.\n\n";
    // Accelerate
    cout << "I'm accelerating ... \n\n";
    for (int faster = 1; faster <= 5; faster++)
    {
        hotRod.accelerate();

        cout << "Current speed: " << hotRod.getSpeed() << " mph. \n";
    }
    // Now stop
    cout << "\nNow I'm braking ... \n\n";
    for (int slower = 1; slower <= 5; slower++)
    {
        hotRod.brake();
        cout << "Current speed: " << hotRod.getSpeed() << " mph. \n";
    }
    return 0;
}