// CSC 134
// M5T3 Part 2
// March 14, 2019
// Khristopher Lane

#include <iostream>

using namespace std;

class Walnut
{
public:
    int Size;
};
class Squirrel
{
private:
    Walnut *MyDinner;

public:
    Squirrel();
    ~Squirrel();
};
Squirrel::Squirrel()
{
    cout << "Starting!" << endl;
    MyDinner = new Walnut;
    MyDinner -> Size = 30;
}
Squirrel::~Squirrel()
{
    cout << "Cleaning up my mess!" << endl;
    delete MyDinner;
}

int main()
{
    Squirrel *Sam = new Squirrel;
    Squirrel *Sally = new Squirrel;

    delete Sam;
    delete Sally;

    return 0;
}
