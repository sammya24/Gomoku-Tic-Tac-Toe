//
// Created by Sam Hong on 3/5/23.

#include "GameBase.h"
#include "TicTacToeGame.h"
#include "commonOp.h"
#include <array>
#include <iomanip>

TicTacToeGame::TicTacToeGame() : GameBase(Tic_edge_board, Tic_edge_board),
board{{pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_},
      {pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_},
      {pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_},
      {pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_},
      {pieceTypes[empty_piece].display_string_,pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_, pieceTypes[empty_piece].display_string_}}
{
    pieceTypes.push_back(game_piece(piece_color::black, "X", "X"));
    pieceTypes.push_back(game_piece(piece_color::black, "O", "O"));
}

bool TicTacToeGame::done() {
    //vertical win
    for (int i = 1; i <= Tic_edge_board; ++i) {
        if (board[1][i] != pieceTypes[empty_piece].display_string_ && board[1][i] == board[2][i] && board[1][i] == board[Tic_edge_board][i]) {
            winner = board[1][i];
            return true;
        }
    }
    //horizontal win
    for (int i = 1; i <= Tic_edge_board; ++i) {
        if (board[i][1] != pieceTypes[empty_piece].display_string_  && board[i][1] == board[i][2] && board[i][1] == board[i][Tic_edge_board]) {
            winner = board[i][1];
            return true;
        }
    }
    //diagonal win
    if (board[1][1] != pieceTypes[empty_piece].display_string_  && board[1][1] == board[2][2] && board[1][1] == board[Tic_edge_board][Tic_edge_board]) {
        winner = board[1][1];
        return true;
    }
    //other diagonal win
    else if (board[1][Tic_edge_board] != pieceTypes[empty_piece].display_string_  && board[1][Tic_edge_board] == board[2][2] && board[1][Tic_edge_board] == board[Tic_edge_board][1]) {
        winner = board[1][Tic_edge_board];
        return true;
    }
    return false;
}

bool TicTacToeGame::draw() {
    if (TicTacToeGame::done()) {
        return false;
    }
    else if (recMovesXhorizontal.size() + recMovesOhorizontal.size() == num_valid_squares) { //if all squares filled
        return true;
    }
    return false;
}

int TicTacToeGame::turn() {
    if (playerTurn % 2 == 0) {
        cout << "It is now Player X's turn" << endl;
    }
    else {
        cout << "It is now Player O's turn" << endl;
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
                cout << "Player X: ";
                for (int i = 0; i < recMovesXhorizontal.size(); ++i) { //print all Player X's previous moves
                    cout << recMovesXhorizontal[i] << "," << recMovesXvertical[i] << "; ";
                }
                cout << "\n" << endl;
            }
            else {
                cout << "Player O: ";
                for (int i = 0; i < recMovesOhorizontal.size(); ++i) { //print all Player O's previous moves
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

ostream &operator<<(ostream &os, const TicTacToeGame &game) {
    for (int row = Tic_edge_board+1; row >= 0; row--) {
        os << row << ' ';
        for (int col = 0; col < 5; col++) {
            os << std::setw(game.longestPieceLength) << game.board[row][col] << " ";
        }
        os << '\n';
    }
    os << "  0 1 2 3 4";
    return os;
}

