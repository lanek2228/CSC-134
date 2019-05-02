// CSC 134
// Adventure game
// April 9, 2019
// Khristopher Lane

#include <iostream>
#include "game.h"
#include "player.h"
#include "room.h"
#include "item.h"

using namespace std;

int main()
{
    Game Hero;
    Hero.startGame();

    // main game loop
    while (Hero.isRunning() == true)
    {
        Hero.doNextTurn();
    }
    //Hero.gameOver(bool);

    return 0;
}
