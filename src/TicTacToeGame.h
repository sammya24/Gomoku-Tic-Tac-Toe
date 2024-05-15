//
// Created by Sam Hong on 3/5/23.
//

#ifndef CSE332LAB_TICTACTOEGAME_H
#define CSE332LAB_TICTACTOEGAME_H

#include <iostream>
#include <sstream>
#include <vector>
#include "GameBase.h"
using namespace std;

class TicTacToeGame: public GameBase {
public:
    TicTacToeGame();
    friend std::ostream& operator<<(std::ostream& os, const TicTacToeGame& game);
    bool done();
    bool draw();
    int turn();
    int play();
    virtual void print(){
        cout << *this << "\n" << endl;
    }
    string board[5][5];

};
#endif //CSE332LAB_TICTACTOEGAME_H
