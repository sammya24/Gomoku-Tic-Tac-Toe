//
// Created by Sam Hong on 4/7/23.
//

#ifndef CSE332LAB_GOMOKUGAME_H
#define CSE332LAB_GOMOKUGAME_H
#include <iostream>
#include <sstream>
#include <vector>
#include "GameBase.h"
using namespace std;

class GomokuGame: public GameBase {
public:
    GomokuGame();
    friend std::ostream& operator<<(std::ostream& os, const GomokuGame& game);
    bool done();
    bool draw();
    int turn();
    int play();
    virtual void print(){
        cout << *this << "\n" << endl;
    }
    string board[19][19];

};

#endif //CSE332LAB_GOMOKUGAME_H
