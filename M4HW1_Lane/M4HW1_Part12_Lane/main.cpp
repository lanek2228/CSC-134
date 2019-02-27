// CSC 134
// M4HW1 Part 12
// Feb 26, 2019
// Khristopher Lane

#include <iostream>

using namespace std;

void ChangesAreGood(int *mypram)
{
    (*mypram) += 10;
    cout << "Inside the function:" << endl;
    cout << (*mypram) << endl;
}
int main()
{
    int mynumber = 30;
    cout << "Before the function:" << endl;
    cout << mynumber << endl;

    ChangesAreGood (&mynumber);
    cout << "After the function:" << endl;
    cout << mynumber << endl;
    return 0;
}
