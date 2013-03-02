#include <iostream>
#include "board.h"
#include "Player.h"
#include "Game.h"
using namespace std;

int main()
{

    Game game;
    game.initialize();
    game.run();

    return 0;
}
