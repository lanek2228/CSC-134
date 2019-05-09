#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <iostream>
#include <vector>
#include <string>

#include "constant.h"
#include "room.h"
#include "player.h"
#include "item.h"

using namespace std;

//const int NUM_ROOMS = 7;

class Game
{
    // the game class holds all the information
    // the game needs to run
private:

    vector <Room*> rooms;
    Player player;
    int score;
    bool gameIsRunning;
    bool PlayerHasWon;
    void MainGate();
    /*TODO
    add items
    add NPS
    */
    // holds all items
    ItemList itemList;
    //player commands
    // called from doNextTurn ()
    void commandGo(string);
    void commandLook();
    void commandScore();
    void commandRestart();
    // items commands
    void commandExamine(string);
    void commandGet(string);
    void commandDrop(string);
    // Bringing up the player's inventory
    void commandInventory();

public:
    Game();
    ~Game();
    bool isRunning();
    bool hasWon();
    void startGame();
    void gameOver(bool);
    void doNextTurn();

    int getScore();


};
#endif // GAME_H_INCLUDED
