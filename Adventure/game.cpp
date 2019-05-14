#include "game.h"

Game::Game()
{
    gameIsRunning = false; // not ready to play until we start game
    PlayerHasWon = true;
    //create the game object
    vector<Room*> rooms(NUM_ROOMS);
    this ->rooms = rooms;
}

Game::~Game()
{
    //destructor -- clean up any heap memory
}

bool Game::isRunning()
{
    return gameIsRunning;
}

bool Game::hasWon()
{
    return PlayerHasWon;
}

int Game::getScore()
{
    return score;
}

void Game::doNextTurn()
{
    // take user input

    // process next turn
    cout << "What is your next action?" << endl;
     // for now, just process 'go' command
    cout << "> ";
    string verb = "";
    string noun = "";
    cin >> verb;
    if (verb == "go")
        {
        cin >> noun;
        commandGo(noun);
        }
    else if (verb == "quit")
        {
        gameIsRunning = false;
        cout << "Quitting" << endl;
        }
    else if (verb == "look")
        {
        //cout << "Looking" << endl;
        commandLook();
        }
    else if (verb == "score")
        {
        commandScore();
        }
    else if (verb == "help")
        {
        cout << "Hello, i see you need some help. here are some hints." << endl;
        cout << "There are some commands you can type while in the game:" << endl;
        cout << "look: help you look around your surroundings." << endl;
        cout << "go: with name of direction will take you to the next location." << endl;
        cout << "get: pick up the items that are able to be taken." << endl;
        cout << "drop: drop the object that you have on hand." << endl;
        cout << "score: see how many points you have located while playing." << endl;
        cout << "quit: let you exit the game." << endl;
        }
    else if (verb == "examine")
        {
        cin >> noun;
        commandExamine(noun);
        }
    else if (verb == "inventory" or verb == "i")
        {
        commandInventory();
        cout<<endl;
        }
    else if (verb == "get")
        {
        cin >> noun;
        commandGet(noun);
         cout<<endl;
        }
    else if (verb == "drop")
        {
        cin >> noun;
        commandDrop(noun);
         cout<<endl;
        }
    else
        {
        cout << "I don't understand the word \"" << verb << "\". You can type help." << endl;
        }
        //if they are in the main gate they win
    if(player.location->name=="Main Gate")
    {
        PlayerHasWon = true;
    }
    if (PlayerHasWon == true)
        {
            gameOver(true);
        }
}

void Game::startGame()
{
    string names;
    cout << "Welcome new player! Your Task is to escape a prison that your character is currently held in." << endl;
    cout << "You are a prisoner who has been captured from a crooked baron and were frame from a crime." << endl;
    cout << "One night a commotion occurred close to your cell and then an explosion followed after that shook the whole prison." << endl;
    cout << "You will wake up to find your cell room door open and now have the opportunity to escape!" << endl;
    cout <<"--------Side Note-------" << endl;
    cout << "If you have any questions of what to do, type the word help in all lowercase to get assistance of what to do within the game" << endl;
    cout<<endl;
    cout << "Starting the Game now! Good luck and have fun!" << endl;
    // Intro about the game
    gameIsRunning = true;
    PlayerHasWon = false;
    score =0;
    cout << endl;
    // populate the room list
    // then connect rooms together
    Room* Cell = new Room("Cell Room A","You are standing within your cell.", 0);
    Room* Corridor = new Room("Corridor","You stand in a damp corridor that has a smell of musky air.", 1);
    Room* Armory = new Room("Armory","You found an armory that is holding hold weapons and armors for the guards.", 2);
    Room* GuardsPost = new Room("Guard Post","You entered what seems to be a guard post, but there is no one here.", 3);
    Room* Barracks = new Room("Barracks","You walk into the main barracks for the guards.",4);
    Room* Courtyard = new Room("Courtyard","You stumble what seems to be the courtyard, the guards must train here.", 5);
    Room* MainGate = new Room("Main Gate","You found the main gate to exit this horrible prison.", 6);
    Room* Office = new Room("Warden's Office", "You found the prison warden's office, but seems like he is not here at the time.", 7);
    Room* Cell_2 = new Room("Cell Room B", "You found another open cell, but the inhabitant here did not make it.", 8);
    Room* Storage = new Room("Storage Room", "You walked into an old storage room, mostly junk and supplies useless to use for an escape.", 9);

    rooms[0] = Cell;
    rooms[1] = Corridor;
    rooms[2] = Armory;
    rooms[3] = GuardsPost;
    rooms[4] = Barracks;
    rooms[5] = Courtyard;
    rooms[6] = MainGate;
    rooms[7] = Office;
    rooms[8] = Cell_2;
    rooms[9] = Storage;

    // room 0 to room 1
    Cell->North = Corridor;
    // room 1 to room 0
    Corridor->South = Cell;
    // room 1 to room 2
    Corridor->East = Armory;
    // room 1 to room 4
    Corridor->West = GuardsPost;
    // room 2 to room 1
    Armory-> West = Corridor;
    // room 3 to room 2
    GuardsPost->East = Corridor;
    // room 3 to room 5
    GuardsPost->North = Courtyard;
    // room 3 too room 4
    GuardsPost->South = Barracks;
    // room 4 to room 3
    Barracks->North = GuardsPost;
    // room 5 to room 3
    Courtyard->South = GuardsPost;
    // room 5 to room 6
    Courtyard->West = MainGate;
    // room 6 too room 5
    MainGate->East = Courtyard;
    // room 2 to room 8
    Corridor->North = Cell_2;
    // room 8 to room 2
    Cell_2->South = Corridor;
    // room 3 to room 7
    GuardsPost->West = Office;
    // room 7 to room 3
    Office->East = GuardsPost;
    // room 5 to room 9
    Courtyard->North = Storage;
    // room 9 to room 5
    Storage->South = Courtyard;

    //starting location for player
    player.location = rooms[0];

     // next, add some items
    Item LONG_SWORD = Item("longsword", "This is a dull and old guard's sword.", 2);
    Item DEX_POTION = Item("potion", "This Dexterity potion will increase your reflexes.", 3);
    Item STEEL_ARMOR = Item("armor", "This is a sturdy steel armor that would give extra protection.", 4);
    Item PRISON_RAGS = Item("clothes", "These are old prison rags you were left in.", -1);
    Item ROPE = Item("rope", "Sturdy rope that could help you get out of a tight spot.", 5);
    Item KEY = Item("key", "This is an silver key, it might be useful for something?", -2);
    Item BODY = Item("prisoner", "you see a dead Elf prisoner. Poor sot, his throat cut clean.", 8);
    BODY.isLiftable = false; // no way touching that body!
    Item DESK = Item("desk", "You see the warden's desk in the left side of the office.", 7);
    DESK.isLiftable = false; // its bolted to the floor.
    //itemList._items.push_back(apple);
    itemList.add(LONG_SWORD);
    itemList.add(DEX_POTION);
    itemList.add(STEEL_ARMOR);
    itemList.add(PRISON_RAGS);
    itemList.add(ROPE);
    itemList.add(KEY); // Put item in a different room that is within the room office
    itemList.add(BODY);
    itemList.add(DESK);

    // tell the player where they are
    commandLook();
}

void Game::gameOver(bool PlayerHasWon)
{
    if((PlayerHasWon = true))
    {
        MainGate();
        gameIsRunning = false;
    }
    else
    {
        cout << "Game Over! you lose!" << endl;
        gameIsRunning = false;
    }
}

void Game::commandGo(string direction)
{
    // by default we are "verbose"
    // which means look after every move
    bool verbose = true;
    bool justMoved = false;
    bool illegalMove = false;

    cout << "Heading out to next location: " << direction << endl;
    if (direction == "East")
    {
        if(player.location-> East == 0)
        {
            illegalMove = true;
        }
        else
        {
            player.location =  player.location->East;
            justMoved = true;
        }
    }
    else if (direction == "West")
    {
         if (player.location->West == 0)
        {
            illegalMove = true;
        }
         else
        {
            player.location = player.location->West;
            justMoved = true;
        }
    }
     else if (direction == "North")
    {
         if (player.location==rooms[3]) // from the guards post to the courtyard
         {
             openTheCourtyardDoor();
         }
         else if (player.location->North == 0)
        {
            illegalMove = true;
        }
         else
        {
            player.location = player.location->North;
            justMoved = true;
        }
    }
     else if (direction == "South")
    {
         if (player.location->South == 0)
        {
            illegalMove = true;
        }
         else
        {
            player.location = player.location->South;
            justMoved = true;
        }
    }
    else
    {
        //cout << "That direction is not possible to do, try another direction" << endl;
    }

     // tell the player if the move was illegal
    if (illegalMove == true)
    {
        cout << "You can't go " << direction << endl;
        cout << "That direction is not possible to do, try another direction" << endl;
    }

    if (verbose == true and justMoved == true)
    {
        commandLook();
    }
    cout << endl;
}

void Game::commandLook()
{
    cout << "You are looking around your surroundings." << endl;
    cout << endl;
    cout << player.location->printInfo();
    // get all items in this room
    itemList.printItemsInLocation(player.location->locationId);
}

// item commands: Examine, Get, Drop
void Game::commandExamine(string noun)
{
    if (itemList.isItemHere(noun, player.location->locationId))
    {
        // TODO: print the description of that item
        cout << itemList.getItemDescription(noun) << endl;
        //cout << "It's on the floor here." << endl;
        cout << endl;
        // Puzzle 1: need the key to unlock the door leading to the courtyard.
        if(noun == "desk")
        {
            Item* KEY = itemList.getItemByName("key");
            if (KEY != 0)
            {
                cout << "You notice a key within one of the desk's drawers." << endl;
                KEY->setLocationId(7);
            }
            else {
                // should never happen
                cout << "ERROR: couldn't move key into play" << endl;
            }
        }
    }
    else if (itemList.isItemHere(noun, INVENTORY))
    {

        // print the description of that item
        cout << itemList.getItemDescription(noun) << endl;
        cout << "You're carrying that." << endl;
        cout << endl;
    }
    else
    {
        cout << "That is not here." << endl;
    }
}

void Game::commandGet(string noun)
{
    if (itemList.isItemHere(noun, player.location->locationId))
    {
        // item is here
        if (itemList.getItemByName(noun)->isLiftable == false)
        {
            cout << "You can't pick that up." << endl;
        }
        else
        {
            cout << "Done." << endl;
            // change the item's locationID to INVENTORY
            itemList.updateLocation(noun, INVENTORY);
            cout << "you earn 10 points!" << endl;
        score+= 10;
        }
    }
    else if (itemList.isItemHere(noun, INVENTORY)){
        cout << "You're already carrying the " << noun << endl;
    }
    else
    {
        cout << "The " << noun << " is not here." << endl;
    }
}

void Game::commandDrop(string noun)
{
    // if the item's location id is INVENTORY
    // change it to the current room
    // Very similar how void function of commandGet

    if (itemList.isItemHere(noun, INVENTORY))
    {
        // item is here
        cout << "Dropped." << endl;
        // change the item's locationID to INVENTORY
        itemList.updateLocation(noun, player.location->locationId);
        cout << "you lost 10 points!" << endl;
        score-= 10;
    }
    else if (itemList.isItemHere(noun, player.location->locationId)){
        cout << "You're already dropped the " << noun << endl;
    }
    else
    {
        cout << "The " << noun << " is not here to be dropped." << endl;
    }
}

void Game::commandInventory()
{
    // list all items the player is carrying
    cout << "You check your belongings." << endl;
    itemList.printItemsInLocation(INVENTORY);
}

void Game::commandScore()
{
    cout << "Your score is: " << getScore() << endl;
    cout << endl;
}

void Game::commandRestart()
{
    startGame();
}

void Game::MainGate()
{
    cout << "You have Won, great work on escaping the prison!" << endl;
    cout << "During your escape you earned: " << score << endl;
    cout << endl;
    Epilogue();
}

void Game::openTheCourtyardDoor()
{
   Item* pKEY  = itemList.getItemByName("key");

   //bool hasKEY = false;

   if(INVENTORY == pKEY->getLocationId())
   {
       //hasKEY = true;
       player.location->North = rooms[5]; // goes into the courtyard
       cout << "you unlocked the door that leads into the courtyard." << endl;
       player.location = player.location-> North;
       commandLook();
       cout << endl;
   }
   else
   {
       cout << "the door is locked, need to find a way to unlock it." << endl;
   }
}
void Game::Epilogue() //an epilogue of what happens to your character and even open up to future games/ideas.uit
{
    cout << "As you exit the main prison's gate, you would see bodies all around you." << endl;
    cout << "The bodies would be of guards and another faction you do not know about." << endl;
    cout << "However, you would notice a strange figure dressed in robes in front of you with a hood over their head." << endl;
    cout << "The person would lower the hood to reveal them to be a female Elf and offers her a hand to you." << endl;
    cout << "She would speak out to you: <If you want to live, follow me. Your adventure is just beginning.>" << endl;
    cout << "You do not have any other options for you can hear the sound of battle from the distance." << endl;
    cout << "You will take her hand and walk into a portal she had conjured up, leaving behind your captivity for freedom." << endl;
}
