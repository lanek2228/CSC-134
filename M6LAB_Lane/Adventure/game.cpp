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
        cout << "Help is not implemented yet." << endl;
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
    cout << "Starting the Game" << endl;
    gameIsRunning = true;
    PlayerHasWon = false;
    score =0;
    cout << endl;
    // populate the room list
    // then connect rooms together
    Room* Cell = new Room("Prison Cell","You are standing within your cell.");
    Room* Corridor = new Room("Corridor","You stand in a damp corridor that has a smell of musky air.");
    Room* Armory = new Room("Armory","You found an armory that is holding hold weapons and armors for the guards.");
    Room* GuardsPost = new Room("Guard Post","You entered what seems to be a guard post, but there is no one here.");
    Room* Barracks = new Room("Barracks","You walk into the main barracks for the guards.");
    Room* Courtyard = new Room("Courtyard","You stumble what seems to be the courtyard, the guards must train here.");
    Room* MainGate = new Room("Main Gate","You found the main gate to exit this horrible prison.");

    rooms[0] = Cell;
    rooms[1] = Corridor;
    rooms[2] = Armory;
    rooms[3] = GuardsPost;
    rooms[4] = Barracks;
    rooms[5] = Courtyard;
    rooms[6] = MainGate;

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
    GuardsPost->South = Barracks;
    Barracks->North = GuardsPost;
    Courtyard->South = GuardsPost;
    Courtyard->West = MainGate;
    MainGate->East = Courtyard;

    //starting location for player
    player.location = rooms[0];

    // tell the player where they are
    commandLook();
}

void Game::gameOver(bool PlayerHasWon)
{
    if(PlayerHasWon = true)
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
         if (player.location->North == 0)
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
    cout << "You have Won, great work on escaping the prison!";
    cout << endl;
}
