#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;


int main(){

//24. Convert the following while loop to a for loop:
// int count = 0;
// while (count < 50)
// {
//     cout  << "count is " << count << endl;
//     count++;
// }
// //////////////////////////////////////

// for(int count = 0; count < 50; count++){
//    cout << "count is " << count << endl;
// }


////////////////////////////////////////////////////

//25. Convert the following for loop to a while loop:
// for (int x = 50; x >0; x--)
// {
//     cout  << x << " seconds to go. \n";
// }
// //////////////////

// int x = 50;

// while(x > 0) {
//     cout << x << " seconds to go. \n";
//     x--;
// }



//     double num1, num2;
// 	char again = 'y';

// do {	

// cout << "Enter two numbers: ";
// cin  >> num1 >> num2;
// cout << "Their sum is " << (num1 + num2) << endl;
// cout << "Do you want to add more numbers? (Y/N) ";
// cin  >> again;
// } while (again == 'Y' || again == 'y');


// ofstream outfile;

// outfile.open ("tens.txt");
	
// 	for (int i = 0; i < 1001; i+=10)
// 		outfile << i << endl;
		
// 	outfile.close();

// double check = 2004.505;

// cout << setw(12) << fixed << showpoint << setprecision(4) << check << endl; 

// int i = 5;

// i -= 1;
// cout << i;


// 8.	A bowling alley is offering a prize to the bowler whose average score from bowling three games is the lowest.   Write the C++ code for a program that inputs three bowling scores and calculates and displays their average.

// int score1, score2, score3;
// float average;

// cout << "Enter the scores separated by spaces" << endl;
// cin >> score1 >> score2 >> score3;
// average = (score1 + score2 + score3) / 3;
// cout << "Average score is: " << average << endl;

// int score =89;

// if(score >= 90){
//   cout << "Excellent" << endl;
// } else if (score >= 80 && score <= 89){
//   cout << "Good" << endl;
// } else {
//   cout << "Try Harder" << endl;
// }

//  int mini = 1;

//  if(mini){
// 	cout << "works";
//  }

// Write C++ code that lets the user enter a number.  The number should be multiplied by 2 and printed until the number exceeds 50.  Use a while loop

// int num;
// cout << "Please enter a number: " << endl;
// cin >> num;
// while(num < 50){
// 	num *= 2;
// 	cout << num << endl;
// }


// 21.	Write a do-while loop that asks the user to enter two  numbers.  The numbers should be added and the sum displayed.   The user should be asked if he or she wishes to perform the operation again.   If so, the loop should repeat; otherwise it should terminate.
// int a, b, result;
// char again = 'y';

// do {
// 	cout << "Enter two numbers to add separated by spaces" << endl;
// 	cin  >> a >> b;
// 	result = (a + b);
// 	cout << "The result is: " << result << endl; 
// 	cout << "Do you want to add more numbers? (Y/N): " << endl;
// 	cin >> again;

// } while(again == 'y' || again == 'Y');

// 22.	Write a code segment that creates an ofstream object named outfile, opens a file named tens.txt and associates it with outfile.  The code should then use a for loop that writes the following set of numbers to the file, each on a new line:
// 0, 10, 20, 30, 40, 50 ….1000
// It should then close the file.

//Create object named outFile
  ofstream outFile;
 // Open the file
  outFile.open("tens.txt");
  // Loop to 1000 and prints tens to file
  for(int i = 0; i <= 1000; i+=10){
	outFile << i << endl;
  }
  // Close the file
  outFile.close();

  //Hint to the user it is finished
  cout << "Finished: File has been closed." << endl;



     return 0;
}
