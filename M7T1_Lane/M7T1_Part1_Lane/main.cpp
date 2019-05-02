// CSC 134
// M7T1 Listing 1-1
// May 2, 2019
// Khristopher Lane

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outfile ("../MyFile.txt");
    outfile << "Hi" << endl;
    outfile.close();

    return 0;
}
