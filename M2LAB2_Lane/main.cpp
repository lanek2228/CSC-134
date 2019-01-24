// CSC 134
// M2LAB2
// Jan 24, 2019
// Khristopher Lane

#include <iostream>

using namespace std;

int main()
{
    float numberGrade;
    char letterGrade;
    // get the numerical number
    // convert to letter grade
    cout << "What is your present number grade? " << endl;
    cin >> numberGrade;
    if (numberGrade >= 90.0)
    {
        letterGrade = 'A';
    }
    else if (numberGrade >= 80.0)
    {
        letterGrade = 'B';
    }
    else if (numberGrade >= 70.0)
    {
        letterGrade = 'C';
    }
    else if (numberGrade >= 60.0)
    {
        letterGrade = 'D';
    }
    else
    {
        letterGrade = 'F';
    }
        cout << "I see you letter grade is a: " << letterGrade << endl;

    return 0;
}
