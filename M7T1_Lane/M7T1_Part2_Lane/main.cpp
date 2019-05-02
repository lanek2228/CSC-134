// CSC 134
// M7T1 Listing 1-2
// May 2, 2019
// Khristopher Lane

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string word;
    ifstream infile("../MyFile.txt");
    infile >> word;
    cout << word << endl;
    infile.close();

    return 0;
}
