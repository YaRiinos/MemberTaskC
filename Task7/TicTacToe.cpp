
#include "TicTacToe.h"


void TicTacToe::play(Player &xPlayer, Player &oPlayer) {

    gameBoard='.';

    winPlayer=nullptr;
    xPlayer.setMyChar('X');
    oPlayer.setMyChar('O');

    int boardMaxMoves=gameBoard.size()*gameBoard.size();

    for (int i = 0; i <boardMaxMoves ; ++i) {
        makeMove(xPlayer,oPlayer);
        if (winPlayer!= nullptr) break;
        makeMove(oPlayer,xPlayer);
        if (winPlayer!= nullptr) break;
    }
}
//
void TicTacToe::checkWinner(Player &thePlayer) {

    if(rowIsFull(thePlayer.myChar))
        winPlayer=&thePlayer;

    if(colIsFull(thePlayer.myChar))
        winPlayer=&thePlayer;

    if(firstDiagonalIsFull(thePlayer.myChar))
        winPlayer=&thePlayer;

    if(secondDiagonalIsFull(thePlayer.myChar))
        winPlayer=&thePlayer;



}

void TicTacToe::makeMove(Player &thisMovePlayer, Player &secondPlayer) {

    Coordinate move{0,0};

    //Make sure player can make this move
    try {
        move = thisMovePlayer.play(gameBoard);
    } catch (...) {
        winPlayer = &secondPlayer;
    }

    //Make sure play don't overwrite the second player
    if (gameBoard[move]=='.') {
        gameBoard[move] = thisMovePlayer.getChar();
    } else { // illegal move
        winPlayer = &secondPlayer;
    }

    checkWinner(thisMovePlayer);
}



bool TicTacToe::rowIsFull(char charP) {
    char winnerChar='N';
    for (int i = 0; i < gameBoard.size(); ++i) {
        for (int j=1; j< gameBoard.size(); ++j) {
            if (gameBoard[{i,j}]==gameBoard[{i,j-1}] && gameBoard[{i,j}]!='.'){
                if (j==gameBoard.size()-1){
                    winnerChar=charP;
                }
            }
            else
                break;
        }
    }
    return winnerChar == charP;

}

bool TicTacToe::colIsFull(char charP) {
    char winnerChar='N';
    for (int i = 0; i < gameBoard.size(); ++i) {
        for (int j=1; j< gameBoard.size(); ++j) {
            if (gameBoard[{j,i}]==gameBoard[{j-1,i}] && gameBoard[{i,j}]!='.'){
                if (j==gameBoard.size()-1){
                    winnerChar=charP;
                }
            }
            else
                break;
        }
    }
    return winnerChar == charP;

}

bool TicTacToe::firstDiagonalIsFull(char charP) {
    char winnerChar='N';

        for (int j=1; j< gameBoard.size(); ++j) {
            if (gameBoard[{j,j}]==gameBoard[{j-1,j-1}] && gameBoard[{j,j}]!='.'){
                if (j==gameBoard.size()-1){
                    winnerChar=charP;
                }
            }
            else
                break;
        }

    return winnerChar == charP;
}

bool TicTacToe::secondDiagonalIsFull(char charP) {
    char winnerChar='N';

    for (int j = gameBoard.size()-1; j>0; --j) {
        if (gameBoard[{j,j}]!=gameBoard[{j-1,j-1}] && gameBoard[{j,j}]!='.'){
            if (j==1){
                winnerChar=charP;
            }
        } else
            break;

        }

    return winnerChar == charP;
}

