#include "room.h"


Room::Room()
{
    // default constructor -- be sure
    // to set name and description later
    // if you use this
    name = "Room";
    description = "you see a cat.";

    // null pointer (zero) exits don't lead anywhere
    North = 0;
    South = 0;
    East = 0;
    West = 0;
}

Room::Room(string name, string description)
{
    this->name = name;
    this->description = description;

    North = 0;
    South = 0;
    East = 0;
    West = 0;
}

string Room::printInfo()
{
    // will later include things like exits and items present.
    string endl = "\n";
    string space = " ";

    string output = name + endl
                    + description + endl +endl;

    output += "Exits: ";
    if (North != 0)
    {
        output += "North" + space;
    }
    if (South != 0)
    {
        output += "South" + space;
    }
    if (East != 0)
    {
        output += "East" + space;
    }
    if (West != 0)
    {
        output += "West" + space;
    }
    output += endl;

    return output;

}
// test of sub class of Room
/*string CarptedRoom::printInfo()
{
    string endl = "\n";
    string Room::printInfo();
    output += "Oh yeah, there is carpet here too." + endl;
    return output;
}*/
