// CSC 134
// M4T2 Part 3
// Feb 19, 2019
// Khristopher Lane

#include <iostream>

using namespace std;

int main()
{
    int NumberOfPotholes;
    int *ptr = &NumberOfPotholes;
    int SaveForLater;
    *ptr = 6087;
    SaveForLater = *ptr;
    cout << SaveForLater << endl;
    *ptr = 7000;
    cout << *ptr << endl;
    cout << SaveForLater << endl;
    return 0;
}
