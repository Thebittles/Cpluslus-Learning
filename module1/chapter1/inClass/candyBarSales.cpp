#include <iostream>
using namespace std;


int main()
{
    double bars_sold, profit_per_bar, total_profit;

    cout << "How many bars were sold? " << endl;
    cin >> bars_sold;
    
    cout << "What is the profit per bar? " << endl;
    cin >> profit_per_bar;

    total_profit = bars_sold * profit_per_bar;

    cout << "The total profit is: " << total_profit;

    return 0;
}