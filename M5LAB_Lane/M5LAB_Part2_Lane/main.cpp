// CSC 134
// M5Lab Part 2
// March 19, 2019
// Khristopher Lane

#include <iostream>
#include "room.cpp"

using namespace std;

int main()
{

    const int Prison_Rooms = 7;
    // the rooms are prison cell, corridor, armory, guard post, barracks, courtyard, main gate
    string names [Prison_Rooms];
    string description [Prison_Rooms];
    string exits [Prison_Rooms];

    names[0] = "Prison Cell";
    description [0] = "You are standing within you Prison Cell.";
    exits [0] = "The door is open north of your cell.";

    names[1] = "Corridor";
    description [1] = "You stand in a damp corridor that has a smell of musky air.";
    exits [1] = "You can head East or West of this corridor.";

    names[2] = "Armory";
    description [2] = "You found an armory that is holding hold weapons and armors for the guards.";
    exits [2] = "You can only head back into the corridor South of your present location.";

    names[3] = "Guard Post";
    description [3] = "You entered what seems to be a guard post, but there is no one here.";
    exits [3] = "You can head North or East from your location or back South to the corridor.";

    names[4] = "Barracks";
    description [4] = "You walk into the main barracks for the guards.";
    exits [4] = "You can only head back East, returning to the guard post.";

    names[5] = "Courtyard";
    description [5] = "You stumble what seems to be the courtyard, the guards must train here.";
    exits [5] = "You can only head West from your present location.";

    names[6] = "Main Gate";
    description [6] = "You found the main gate to exit this horrible prison.";
    exits [6] = "The main gate to your North is the only way to escape.";

    for (int i = 0; i < Prison_Rooms; i++)
    {
        cout << names[i] << endl;
        cout << description [i] << endl;
        cout << exits[i] << endl;
        cout << endl;
    }
    cout << "Calling one of the Rooms that is from the array" << endl;
    cout << endl;
    Room Prison_Cell;

    Prison_Cell.names = "Prison Cell";
    Prison_Cell.description = "You are standing within you Prison Cell.";
    Prison_Cell.exits = "The door is open north of your cell.";

    cout << Prison_Cell.names << endl;
    cout << Prison_Cell.description << endl;
    cout << Prison_Cell.exits << endl;
    return 0;
}
