// CSC 134
// M6T2
// April 4, 2019
// Khirstopher Lane

#include <iostream>
#include <vector>
#include <string>

#include "room.h"

using namespace std;

void PrisonRooms()
{
    string names;
    // My seven Rooms within the Prison
    Room* Cell = new Room("Prison Cell","You are standing within you Prison Cell.");
    Room* Corridor = new Room("Corridor","You stand in a damp corridor that has a smell of musky air.");
    Room* Armory = new Room("Armory","You found an armory that is holding hold weapons and armors for the guards.");
    Room* GuardsPost = new Room("Guard Post","You entered what seems to be a guard post, but there is no one here.");
    Room* Barracks = new Room("Barracks","You walk into the main barracks for the guards.");
    Room* Courtyard = new Room("Courtyard","You stumble what seems to be the courtyard, the guards must train here.");
    Room* MainGate = new Room("Main Gate","You found the main gate to exit this horrible prison.");
    const int NUM_ROOMS = 7;

    vector<Room*> rooms(NUM_ROOMS);
    rooms[0] = Cell;
    rooms[1] = Corridor;
    rooms[2] = Armory;
    rooms[3] = GuardsPost;
    rooms[4] = Barracks;
    rooms[5] = Courtyard;
    rooms[6] = MainGate;

    for (int i=0; i < NUM_ROOMS; i++)
        {
        rooms[i] = new Room();
        rooms[i]->name = names[i];
        //rooms[i]->description = "Set room description here";
        }

    /*//List of all the prison rooms
    for (int i=0; i < NUM_ROOMS; i++)
        {
        cout << "Currently in this room:" << endl;
        cout << rooms[i]->printInfo();
        }*/

    Cell->North = Corridor;
    Corridor->South = Cell;
    Corridor->East = Armory;
    Corridor->West = GuardsPost;
    Armory-> West = Corridor;
    GuardsPost->East = Corridor;
    GuardsPost->North = Courtyard;
    GuardsPost->South = Barracks;
    Barracks->North = GuardsPost;
    Courtyard->South = GuardsPost;
    Courtyard->West = MainGate;
    MainGate->East = Courtyard;

    // Try to Escape!
    Room* myLocation = Cell;

    cout << myLocation->printInfo();

    cout << "Getting Out of this Cell!" << endl;
    cout << "--Heading North--" << endl;
    myLocation = myLocation->North;

    cout << myLocation->printInfo();

    cout << "--Heading East--" << endl;
    myLocation = myLocation->East;

    cout << myLocation->printInfo();

    cout << "--Heading West--" << endl;
    myLocation = myLocation->West;

    cout << myLocation->printInfo();

    cout << "--Heading West--" << endl;
    myLocation = myLocation->West;

    cout << myLocation->printInfo();

    cout << "--Heading South--" << endl;
    myLocation = myLocation->South;

    cout << myLocation->printInfo();

    cout << "--Heading North--" << endl;
    myLocation = myLocation->North;

    cout << myLocation->printInfo();

    cout << "--Heading North--" << endl;
    myLocation = myLocation->North;

    cout << myLocation->printInfo();

    cout << "--Heading West-- Almost there, I can sense it!" << endl;
    myLocation = myLocation->West;

    cout << endl;
    cout << "I found the gate! I am out of here!" << endl;
    cout << "You found the exit, you won!" << endl;
}

void PrisonEscapeBegins()
{
    cout << "Welcome to Escape the Prison! Goal is to find the exit. Have fun!" << endl;
    cout << endl;
    PrisonRooms();
}

int main()
{
    PrisonEscapeBegins();
    return 0;
}
