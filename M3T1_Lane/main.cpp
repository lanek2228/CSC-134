// CSC 134
// M3T1
// Feb 5, 2019
// Khristopher Lane
#include <iostream>

using namespace std;

int main()
{
    // Number of tests to average
    // within loop, ask for a test grade
    // add it to the total
    // find the average by dividing total by number of tests
    int grade; // individual test scores
    int numTests;
    int average; // or float if wanted to
    int total=0; // the accumulator
    // verbs: input, output, add, average
    cout << "How many tests to average? ";
    cin >> numTests;
    for (int count=1; count <=numTests; count ++)
        {
            cout << "Grade for Test? ";
            cin >> grade;
            total= total+grade;
        }
        cout << "Total = " << total << endl;
        average=total/numTests;
        cout << "The average is " << average << endl;
    // The whileLoop version
    int score;
    int Tests=1;
    int mean;
    int result=0;
    while (Tests<=numTests)
    {
        cout << "What is the grade for the test? ";
        cin >> score;
        cout << Tests << endl;
        Tests ++;
        result= result+score;
    }
    cout << "The total grade is " << result << endl;
    mean=result/Tests;
    cout << "The average grade is " << mean << endl;
    return 0;
}
