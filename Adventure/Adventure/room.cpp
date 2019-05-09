#include "room.h"


Room::Room()
{
    // default constructor -- be sure
    // to set name and description later
    // if you use this
    name = "Room";
    description = "you see a cat.";
    locationId = 0;

    // null pointer (zero) exits don't lead anywhere
    North = 0;
    South = 0;
    East = 0;
    West = 0;
}

Room::Room(string name, string description, int locationId)
{
    this->name = name;
    this->description = description;
    this->locationId = locationId;

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

    // todo: list items in room

    return output;

}
