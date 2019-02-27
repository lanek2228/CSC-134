// CSC 134
// M4HW1 Part 16
// Feb 26, 2019
// Khristopher Lane

#include <iostream>

using namespace std;

void MessMeUp(int &mypram)
{
    mypram = mypram * 2 + 10;
}
int main()
{
    int mynumber = 30;
    MessMeUp(mynumber);
    cout << mynumber << endl;
    return 0;
}
