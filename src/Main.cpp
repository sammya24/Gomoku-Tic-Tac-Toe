/**
 * Main.cpp
 * CSE 332S
 * Lab Num: 4
 * Author: Samantha Hong
*/

#include "GameBase.h"
#include "TicTacToeGame.h"
#include "commonOp.h"
#include <memory>

int main(int argc, char *argv[]) {

    shared_ptr<GameBase> p(GameBase::newGame(argc, argv));
    //TODO make sure do error catches AND badAlloc

    if (p == nullptr){
        usageMessage(argv[file_name], "<NameOfGame>");
        return wrong_command_line_args;
    }

    int result = p->play();
    return result;
}
