#include "Game.h"
#include <iostream>
using namespace std;
Game::Game()
{
    //ctor
}

Game::~Game()
{
    //dtor
}
void Game::initialize ()
{
    m_board.initialize();
    m_p1.setName("Louie");
    m_p1.setIcon('O');
    m_p2.setName("Jul");
    m_p2.setIcon('X');
    m_currentPlayer = &m_p1;

}
void Game::update (){
        m_board.update(m_currentPlayer->getMove(), m_currentPlayer->getIcon());
        m_isComplete = checkwin();
        switchPlayer();

}
void Game::render ()
{
    m_board.render();
    cout << "\t\tIt is "<<m_currentPlayer->getName()<<"'s turn.";
}


bool Game::checkwin ()
{
    m_board.checkwin();

}


void Game::switchPlayer()
{
    if (m_currentPlayer == &m_p1)
        m_currentPlayer = &m_p2;
    else if (m_currentPlayer == &m_p2)
        m_currentPlayer = &m_p1;
}

void Game::run()
{
    while(!m_isComplete)
    {
        render();
        update();
    }
    m_board.render();
    switchPlayer();
    cout << "\t\tThe winner is " << m_currentPlayer->getName() << endl;
}
