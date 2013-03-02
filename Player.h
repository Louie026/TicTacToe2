#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;


class Player
{
    public:
        Player();
        virtual ~Player();
        void setName(string name);
        string getName();
        void setIcon(char i);
        char getIcon();
        void setMove(int m);
        int getMove();
    protected:
    private:
    string name;
    char icon;
    int move;
};

#endif // PLAYER_H
