// CSC 134
// M4T2 Part 2
// Feb 19, 2019
// Khristopher Lane

#include <iostream>

using namespace std;

int main()
{
    int NumberOfPotholes;
    int *ptr;
    ptr = &NumberOfPotholes;
    *ptr = 6087;
    cout << NumberOfPotholes << endl;
    return 0;
}
