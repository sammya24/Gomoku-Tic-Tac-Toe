//
// Created by Sam Hong on 4/7/23.
//

#ifndef CSE332LAB_GAMEBASE_H
#define CSE332LAB_GAMEBASE_H

#include "GameBase.h"
#include "commonOp.h"
#include "gamePieces.h"
#include <sstream>
#include <vector>
#include <string>

using namespace std;

class GameBase {
protected:
    unsigned int length, width, playerTurn;
    string winner;
    vector<unsigned int> recMovesXhorizontal;
    vector<unsigned int> recMovesXvertical;
    vector<unsigned int> recMovesOhorizontal;
    vector<unsigned int> recMovesOvertical;
    int longestPieceLength;
    vector<game_piece> pieceTypes;
    virtual void print() = 0;
    virtual bool done() = 0;
    virtual bool draw() = 0;
    int prompt(unsigned int& horizontal, unsigned int& vertical);
    virtual int turn() = 0;

public:
    static GameBase* newGame(int argc, char* argv[]);
    int play();
    GameBase(int l, int w);
};
#endif //CSE332LAB_GAMEBASE_H
