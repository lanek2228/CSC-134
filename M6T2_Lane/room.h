#ifndef ROOM_H_INCLUDED
#define ROOM_H_INCLUDED

#include <string>

using namespace std;

/*
The Room class describes individual rooms in the game.
A room has a name, a description, and a series of exits
which point to other rooms.

Next, we'll add some way to store items in a room.

*/



class Room
{
public:
    Room();     // default constructor
    Room(string, string); // name and description
    string printInfo();

    string name;
    string description;

    // exits
    Room* North;
    Room* South;
    Room* East;
    Room* West;
};

#endif // ROOM_H_INCLUDED
