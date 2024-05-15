//
// Created by Sam Hong on 4/7/23.
//

#include "GameBase.h"
#include "GomokuGame.h"
#include "commonOp.h"
#include <array>
#include <iomanip>

GomokuGame::GomokuGame() : GameBase(Gom_edge_board, Gom_edge_board),
    board{{pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_},
          {pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_},
          {pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_},
          {pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_},
          {pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_},
          {pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_},
          {pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_},
          {pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_},
          {pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_},
          {pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_},
          {pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_},
          {pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_},
          {pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_},
          {pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_},
          {pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_},
          {pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_},
          {pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_},
          {pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_},
          {pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_},
          }
{
    pieceTypes.push_back(game_piece(piece_color::black, "black stone", "B"));
    pieceTypes.push_back(game_piece(piece_color::white, "white stone", "W"));
}

bool GomokuGame::done() {
    //horizontal win
    for (int i = 1; i < Gom_edge_board; ++i) {
        for (int j = 1; j < Gom_bound_edge; ++j) {
            if (board[i][j] != pieceTypes[empty_piece].display_string_ && board[i][j] == board[i][j+1] && board[i][j] == board[i][j+2] && board[i][j] == board[i][j+3] && board[i][j] == board[i][j+4]) {
                winner = board[i][j];
                return true;
            }
        }
    }

    //vertical win
    for (int i = 1; i < Gom_bound_edge; ++i) {
        for (int j = 1; j < Gom_edge_board; ++j) {
            if (board[i][j] != pieceTypes[empty_piece].display_string_ && board[i][j] == board[i+1][j] && board[i][j] == board[i+2][j] && board[i][j] == board[i+3][j] && board[i][j] == board[i+4][j]) {
                winner = board[i][j];
                return true;
            }
        }
    }

    //diagonal win
    for (int i = 1; i < Gom_bound_edge; ++i) {
        for (int j = 1; j < Gom_bound_edge; ++j) {
            if (board[i][j] != pieceTypes[empty_piece].display_string_ && board[i][j] == board[i+1][j+1] && board[i][j] == board[i+2][j+2] && board[i][j] == board[i+3][j+3] && board[i][j] == board[i+4][j+4]) {
                winner = board[i][j];
                return true;
            }
        }
    }

    //other diagonal win
    for (int i = 5; i < Gom_edge_board; ++i) {
        for (int j = 0; j < Gom_bound_edge; ++j) {
            if (board[i][j] != pieceTypes[empty_piece].display_string_ && board[i][j] == board[i-1][j+1] && board[i][j] == board[i-2][j+2] && board[i][j] == board[i-3][j+3] && board[i][j] == board[i-4][j+4]) {
                winner = board[i][j];
                return true;
            }
        }
    }
    return false;
}

bool GomokuGame::draw() {
    if (GomokuGame::done()) {
        return false;
    }
    //see if there aren't any empty squares yet
    for (int i = 1; i < Gom_edge_board; ++i) {
        for (int j = 1; j < Gom_edge_board; ++j) {
            if (board[i][j] == " ") {
                return false;
            }
        }
    }

    //check to see if there still exist any remaining ways to win
    for (int i = 1; i < Gom_edge_board; ++i) {
        for (int j = 1; j < Gom_edge_board; ++j) {
            //horizontal ways
            if (j <= Gom_bound_edge && board[i][j] == board[i][j + 1] && board[i][j] == board[i][j + 2] && board[i][j] == board[i][j + 3] && (j == 1 || board[i][j - 1] != board[i][j]) && (j == Gom_bound_edge || board[i][j + 4] != board[i][j])) {
                return false;
            }

            //vertical ways
            if (i <= Gom_bound_edge && board[i][j] == board[i + 1][j] && board[i][j] == board[i + 2][j] && board[i][j] == board[i + 3][j] && (i == 1 || board[i - 1][j] != board[i][j]) && (i == Gom_bound_edge || board[i + 4][j] != board[i][j])) {
                return false;
            }

            //diagonal ways
            if (i <= Gom_bound_edge && j <= Gom_bound_edge && board[i][j] == board[i + 1][j + 1] && board[i][j] == board[i + 2][j + 2] && board[i][j] == board[i + 3][j + 3] && ((i == 1 && j == 1) || board[i - 1][j - 1] != board[i][j]) && ((i == Gom_bound_edge && j == Gom_bound_edge) || board[i + 4][j + 4] != board[i][j])) {
                return false;
            }

            //other diagonal ways
            if (i >= 5 && j <= Gom_bound_edge && board[i][j] == board[i - 1][j + 1] && board[i][j] == board[i - 2][j + 2] && board[i][j] == board[i - 3][j + 3] && ((i == Gom_edge_board && j == 1) || board[i + 1][j - 1] != board[i][j]) && ((i == 5 && j == Gom_bound_edge) || board[i - 4][j + 4] != board[i][j])) {
                return false;
            }
        }
    }
    return true;
}

int GomokuGame::turn() {
    if (playerTurn % 2 == 0) {
        cout << "It is now Player B's turn" << endl;
    }
    else {
        cout << "It is now Player W's turn" << endl;
    }
    unsigned int horizontal, vertical;
    while (true) {
        int result = prompt(horizontal, vertical);
        if (result == user_quit) {
            return user_quit;
        }
        else if (result == fail_extract_move) {
            return fail_extract_move;
        }

        game_piece piece;

        if (board[vertical][horizontal] == pieceTypes[empty_piece].display_string_ ) { //if desired square move is empty
            if (playerTurn % 2 == 0) {
                piece = pieceTypes[player1];
                recMovesXhorizontal.push_back(horizontal);
                recMovesXvertical.push_back(vertical);
            }
            else {
                piece = pieceTypes[player2];
                recMovesOhorizontal.push_back(horizontal);
                recMovesOvertical.push_back(vertical);
            }

            board[vertical][horizontal] = piece.display_string_; //move to desired square
            if (piece.display_string_.length() > longestPieceLength) { //update longest piece length
                longestPieceLength = piece.display_string_.length();
            }
            print();

            if (playerTurn % 2 == 0) {
                cout << "Player B: ";
                for (int i = 0; i < recMovesXhorizontal.size(); ++i) { //print all Player B's previous moves
                    cout << recMovesXhorizontal[i] << "," << recMovesXvertical[i] << "; ";
                }
                cout << "\n" << endl;
            }
            else {
                cout << "Player W: ";
                for (int i = 0; i < recMovesOhorizontal.size(); ++i) { //print all Player W's previous moves
                    cout << recMovesOhorizontal[i] << "," << recMovesOvertical[i] << "; ";
                }
                cout << "\n" << endl;
            }
            return success;
        }
        else {
            cout << "That square is taken, please make a different valid move" << endl;
        }
    }
}

ostream &operator<<(ostream &os, const GomokuGame&game) {
    for (int row = Gom_edge_board; row >= 1; row--) {
        os << row << ' ';
        for (int col = 1; col < Gom_edge_board; col++) {
            os << std::setw(game.longestPieceLength) << game.board[row][col] << " ";
        }
        os << '\n';
    }
    os << "X 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19";
    return os;
}


