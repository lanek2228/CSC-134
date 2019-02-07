// CSC 134
// M3T2
// Feb 7, 2019
// Khristophe Lane
#include <iostream>

using namespace std;

void createChartFor()
{
    cout << "This is the pay chart we will be using for present employment with for " << endl;
    int hours;
    float pay;
    float total;
    cout << "what is your wage at your present location? ";
    cin >> pay;
    cout << "Hours\t\tGross" << endl;
    cout << "------------------------" << endl;
    for (hours=30; hours<=40; hours++)
        {
            total=hours*pay;
            cout << hours <<" \t\t" << total << endl;
        }
}
 void createChartWhile()
 {
    cout << "This is the pay chart we will be using for present employment with while " << endl;
    int hours=30;
    float pay;
    float total;
    cout << "What is your normal wage? ";
    cin >> pay;
    cout << "Hours\t\t Gross" << endl;
    cout <<"--------------------------------" <<endl;
    while (hours<=40)
        {
            total=hours*pay;
            ++hours;
            cout << hours << "\t\t" << total << endl;
        }
 }

int main()
{
    // Print the user's hours and total gross pay
    // Using a for loop
    createChartFor();
    // Print the user's hours and total gross pay
    // Using a while loop
    createChartWhile();
    return 0;
}

