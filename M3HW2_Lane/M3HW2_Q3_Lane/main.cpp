// CSC 134
// M3HW2 question 3
// Feb 14, 2019
// Khistopher lane
#include <iostream>

using namespace std;

// using the void method to to get the length and width of a rectangle to get the area.
void printArea( int length, int width)
{
    cout << "What is the length? ";
    cin >> length;
    cout << "What is the width? ";
    cin >> width;
    int printArea = length * width;
    cout << "Your Area is: " << printArea << endl;
}
int main()
{
    printArea( 20, 20);
    return 0;
}
