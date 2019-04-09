#include "room.h"


Room::Room()
{
    // default constructor -- be sure
    // to set name and description later
    // if you use this
    name = "Room";
    description = "A featureless room.";

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

    string output = name + endl
                    + description + endl +endl;

    return output;

}
