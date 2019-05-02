#ifndef ITEM_H_INCLUDED
#define ITEM_H_INCLUDED

#include <string>
#include <vector> // used by ItemList
//#include "constants.h" // do we need this?

using namespace std;

/*
classes in this file: Item, ItemList

an "item" in an adventure game is generally a thing that can be found in a room,
and can be picked up and dropped by a player

for this first simple implementation we are going to go in steps

    step 1: items are seen when the user sees a room description
    step 2: items have their own descriptions (seen with EXAMINE)
    step 3: items can be moved with GET and DROP

    to plan ahead for implementing get/drop, we'll arbitrarily
    decide that the player also has a location ID. We will use
    the constant by name, but it's -1 since that isn't a valid
    room ID.

    We're using getters and setters simply to show their use.
    (there aren't any access reasons, so you could live without them)

    We're also using the convention of _ before a variable name to
    indicate that it's a private member variable. This is common.
*/

class Item
{
public:
    Item();
    Item(string, string, int); // name, description, locationId

    string getName();
    string getDescription();
    int getLocationId();
    void setLocationId(int);


private:
    string  _name;
    string  _description;
    int     _locationId;

};

class ItemList
{
    // the Game will contain one ItemList,
    // which manages all the items in the game.

    // For more information, see Book IV, Chapter 6,
    // Listing 6-6.
    // That chapter also discusses maps and sets,
    // which are alternatives we'll look at later.

public:
    void printAllItems();
    void printItemsInLocation(int); // locationId
    void add(Item); // adds item to the list
    bool isItemHere(string, int); // name of item, location id
    string getItemDescription(string);
    void updateLocation(string, int); // name of item, location id


private:
    vector<Item> _items;

};

#endif // ITEM_H_INCLUDED
