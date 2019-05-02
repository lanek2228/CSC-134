// CSC 134
// M7T1 Listing 2-3
// May 2, 2019
// Khristopher Lane

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ofstream sals("salaries.text");
    sals << setprecision(2);
    sals << fixed;
    sals << left;

    sals << setw(20) << "Name" << setw(10) << "Salary";
    sals << endl;

    sals << "------------------- "; // 19 hyphens, one space
    sals << "----------" << endl; // 10 hyphens
    sals << setw(20) << "Hank Williams";
    sals << setw(10) << 28422.82 << endl;

    sals << setw(20) << "Buddy Holly";
    sals << setw(10) << 39292.22 << endl;

    sals << setw(20) << "Otis Redding";
    sals << setw(10) << 43838.55 << endl;

    return 0;
}
