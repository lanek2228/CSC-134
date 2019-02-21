// CSC 134
// M4T2 Part 5
// Feb 19, 2019
// Khristopher Lane

#include <iostream>

using namespace std;

int main()
{
    string HorribleMovie;
    string *ptrToString;

    HorribleMovie = "L.A. Confidential";
    ptrToString = &HorribleMovie;

    for (unsigned i = 0; i < HorribleMovie.length(); i++)
    {
        cout << (*ptrToString) [i] << " ";
    }
    cout << endl;
    return 0;
}
