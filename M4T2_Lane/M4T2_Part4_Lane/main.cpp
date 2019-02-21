// CSC 134
// M4T2 Part 4
// Feb 19, 2019
// Khristopher Lane

#include <iostream>

using namespace std;

int main()
{
    string GoodMovie;
    string *ptrToString;
    GoodMovie = "Best in Show";
    ptrToString = &GoodMovie;
    cout << *ptrToString << endl;
    return 0;
}
