// CSC 134
// M3HW1
// Feb 7, 2019
// Khristopher Lane
#include <iostream>
#include <math.h>

using namespace std;

void createListingOne()
{
    cout << fabs (-10.5) << endl;
    cout << fabs (10.5) << endl;
}
void creatListingTwo()
{
    double mynumber;
    mynumber = fabs(-23.87);
    cout << mynumber << endl;
}
void creatListingThree()
{
    double start;

    double finish;
    start = -253.895;
    finish = fabs(start);

    cout << finish << endl;
}
void createListingFour()
{
    double number = 10.0;
    double exponent = 3.0;
    cout << pow(number, exponent) << endl;
}
int AddOne(int start)
    {
        int newNumber;
        newNumber = start + 1;
        return newNumber;
    }
void createListingFive()
    {
        int testNumber;
        int result;

        testNumber = 20;
        result = AddOne (testNumber);

        cout << result << endl;
    }
int main()
{
    cout << "Listing 5-1" << endl;
    createListingOne();
    cout << "Listing 5-2" << endl;
    creatListingTwo();
    cout << "Listing 5-3" << endl;
    creatListingThree();
    cout << "Listing 5-4" << endl;
    createListingFour();
    cout << "Listing 5-5" << endl;
    createListingFive();
    return 0;
}
