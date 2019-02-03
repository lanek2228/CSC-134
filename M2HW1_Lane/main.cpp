// CSC 134
//M2HW1
// Feb 1, 2019
// Khristopher Lane
#include <iostream>

using namespace std;

int main()
{
    // #1. The length, width, and area of a rectangle
    int length;
    int width;
    cout << "What is the rectangle's length that you require? " << endl;
    cin >> length;
    cout << "What is the rectangle's width that you require? " << endl;
    cin >> width;
    cout << "The Area of the rectangle you will need is " << length * width <<  " for your project." << endl;
    // #2. Celsius to Fahrenheit
    float celsius;
    cout << "What is the degree in Celsius? " << endl;
    cin >> celsius;
    cout << "The conversion to Fahrenheit will be about " << (celsius * 1.8) +32 << " degrees." << endl;
    // #4. Average grade
    float GradeOne;
    float GradeTwo;
    float GradeThree;
    float numberGrade;
    float sum;
    char letterGrade;
    cout << "What is your first grade? " << endl;
    cin >> GradeOne;
    cout << "What is your second grade? " << endl;
    cin >> GradeTwo;
    cout << "What is your third grade? " << endl;
    cin >> GradeThree;
    sum=GradeOne+GradeTwo+GradeThree;
    numberGrade=sum/3;
        if (numberGrade >= 90.00)
        {
            letterGrade = 'A';
        }
        else if (numberGrade >= 80.00)
        {
            letterGrade = 'B';
        }
        else if (numberGrade >= 70.00)
        {
            letterGrade = 'C';
        }
        else if (numberGrade >= 60.00)
        {
            letterGrade = 'D';
        }
        else
        {
            letterGrade = 'F';
        }
        cout << "Your total average grade is " << numberGrade << " which correlates to a: " << letterGrade << endl;
    return 0;
}
