// CSC 134
// M3HW2 Question four
// Feb 14, 2019
// Khristopher Lane

#include <iostream>

using namespace std;

float length;
float width;
float totalArea;
float calcArea(float length, float width)
{
    return length * width;
}
int main()
{
    cout << "What is the length? ";
    cin >> length;
    cout << "What is the width? ";
    cin >> width;
    cout << "Your total Area is: " << calcArea(length, width) << endl;
    return 0;
}
