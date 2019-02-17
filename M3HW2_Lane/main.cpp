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
    float bottlesUsed = 1;
    float ouncesPerBottle = 16;
    float ouncesUsed;
    float totalOunces;
    float bottlesSaved;
    cout << "How many ounces of water did you use today?" << endl;
    cin >> ouncesUsed;
    cout << "ounces used\t\t bottles saved" << endl;
    cout << "-------------------------------------" << endl;
    while (ouncesPerBottle <=64)
        {
            totalOunces=ouncesUsed*ouncesPerBottle;
            ++ouncesPerBottle;
            ++bottlesUsed;
            bottlesSaved=bottlesUsed;
            cout << "Ounces used up: " << totalOunces << " Bottles Saved: " << bottlesSaved << endl;
        }
    return 0;
}
