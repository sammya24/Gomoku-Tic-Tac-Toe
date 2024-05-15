//
// Created by Sam Hong on 3/6/23.
//

#pragma once
#ifndef CSE332LAB_COMMONOP_H
#define CSE332LAB_COMMONOP_H

#include <string>
using namespace std;

int usageMessage(const string &name, const string &correctInfoFormat);
enum {
    success = 0,
    wrong_command_line_args = 1,
    game_draw = 2,
    user_quit = 3,
    fail_extract_move = 4,
};
enum{
    num_valid_squares = 9,
    file_name = 0,
    correct_num_args = 2,
    desired_game = 1,
    player1 = 1,
    player2 = 2,
    empty_piece = 0,
    Tic_edge_board = 3,
    Gom_edge_board = 19,
    Gom_bound_edge = 15
};

#endif //CSE332LAB_COMMONOP_H
