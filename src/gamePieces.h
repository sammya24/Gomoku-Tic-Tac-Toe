//
// Created by Sam Hong on 2/24/23.
//
#pragma once

#ifndef CSE332LAB_GAMEPIECES_H
#define CSE332LAB_GAMEPIECES_H
using namespace std;
#include <string>

enum class piece_color {
    red, blue, black, white, invalid, nocolor
};

struct game_piece {
    game_piece(piece_color color, string name, string display_string);
    game_piece();
    piece_color piece_color_;
    string name_;
    string display_string_;
};

string colorToString(piece_color colorName);
piece_color stringToColor (string colorName);

#endif //CSE332LAB_GAMEPIECES_H
