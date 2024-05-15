//
// Created by Sam Hong on 4/7/23.
//

#include "GameBase.h"
#include "TicTacToeGame.h"
#include "GomokuGame.h"
#include <sstream>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

GameBase::GameBase(int l, int w)
: playerTurn(0), winner(" "), longestPieceLength(0), length(l), width(w)
{
    pieceTypes.push_back(game_piece(piece_color::nocolor, "empty", " "));
}

GameBase* GameBase::newGame(int argc, char* argv[] ){
    if (argc == correct_num_args){
        if (string(argv[desired_game]) == "TicTacToe"){
            return new TicTacToeGame();
        }
        if (string(argv[desired_game]) == "Gomoku"){
            return new GomokuGame();
        }
    }
    return nullptr;
}

int GameBase::play() {
    print();
    while (true) {
        if (done()) {
            if (winner == pieceTypes[player1].display_string_ ) {
                cout << "Player " << pieceTypes[player1].display_string_ << " won the game!" << endl;
            } else {
                cout << "Player" << pieceTypes[player2].display_string_ << " won the game!" << endl;
            }
            return success;
        }
        if (draw()) {
            cout << recMovesOhorizontal.size() + recMovesXhorizontal.size()
                 << " turns were played. No winning moves remain." << endl;
            return game_draw;
        }
        int result = turn();
        if (result == user_quit) {
            cout << recMovesOhorizontal.size() + recMovesXhorizontal.size()
                 << " turns were played. User quit to end game." << endl;
            return user_quit;
        }
        playerTurn++;
    }
}

int GameBase::prompt(unsigned int &horizontal, unsigned int &vertical) {
    while(true){
        cout << "Please make a move in the form 0,0 or type quit to exit game" << endl;

        string move;
        if (!getline(cin, move)) {
            return fail_extract_move;
        }

        if (move == "quit") {
            return user_quit;
        }

        char comma;
        istringstream iss(move);
        //check to make sure input is valid! (extra input, non-numerical input, incorrect formatting, etc...)
        if (!(iss >> horizontal >> comma >> vertical) || iss.get() != EOF || comma != ',' || horizontal < 1 || horizontal > width || vertical < 1 || vertical > length) {
            cout << "Please enter a move in the correct format and within the confines of the board" << endl;
        } else {
            return success;
        }
    }
}

