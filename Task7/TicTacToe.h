#include <iostream>
using namespace std;

#include "Board.h"
#include "Player.h"
#include "Coordinate.h"


class TicTacToe {
    Board gameBoard;
    Player* winPlayer;



public:
    TicTacToe(int size):
            gameBoard(size),
            winPlayer(nullptr) {}

    void play(Player& xPlayer, Player& oPlayer);
    void makeMove(Player& xPlayer, Player& oPlayer);

    bool rowIsFull(char charP);
    bool colIsFull(char charP);
    bool firstDiagonalIsFull(char charP);
    bool secondDiagonalIsFull(char charP);

    void checkWinner(Player &thePlayer);


    const Board& board() const {
        return gameBoard;
    }

    const Player& winner() const {
        return *winPlayer;
    }
};