#include "Player.h"

Player::Player()
{
    //ctor
}

Player::~Player()
{
    //dtor
}
void Player::setName(string n)
{
    name=n;
}

string Player::getName()
{
    return name;
}
void Player::setIcon(char i)
{
    icon = i;
}
char Player::getIcon()
{
    return icon;
}

int Player::getMove()
{
    return move;
}
void Player::setMove(int m)
{
    move = m;
}
