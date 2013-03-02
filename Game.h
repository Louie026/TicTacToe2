#ifndef GAME_H
#define GAME_H
#include "Player.h"
#include "board.h"


class Game
{
    public:
        Game();
        virtual ~Game();
        void initialize();
        void update();
        void render ();
        bool checkwin();
        void switchPlayer();
        void run();
    protected:
    private:
        Player m_p1;
        Player m_p2;
        Player *m_currentPlayer;
        bool m_isComplete;
        board m_board;
};

#endif // GAME_H
