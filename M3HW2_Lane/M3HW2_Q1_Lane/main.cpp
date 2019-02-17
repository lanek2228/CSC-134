// CSC 134
// M3HW2 Part 1
// Feb 9, 2019
// Khristopher Lane
#include <iostream>

using namespace std;

int main()
{
    // Want to show the input of how many ounces were used up
    // want to show the total ounces used with number of bottles saved per ounce as output
    // use the while loop for this function
    float bottlesUsed = 0;
    float ouncesPerBottle = 16;
    float ouncesUsed;
    float totalOunces;
    float bottlesSaved;
    cout << "How many ounces of water did you use today?" << endl;
    cin >> ouncesUsed;
    cout << "Ounces Dispensed\t\t Bottles Saved" << endl;
    cout << "-------------------------------------" << endl;
    while (totalOunces < ouncesUsed)
        {
            totalOunces+=ouncesPerBottle;
            ++bottlesUsed;
            bottlesSaved=bottlesUsed;
            cout << "Ounces Dispensed: " << totalOunces << " Bottles Saved: " << bottlesSaved << endl;
        }
    return 0;
}
