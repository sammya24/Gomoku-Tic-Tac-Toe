//
// Created by Sam Hong on 2/24/23.
//

#include "gamePieces.h"

game_piece::game_piece(piece_color color, string name, string display_string)
    : piece_color_(color), name_(name), display_string_(display_string)
    {}

    game_piece::game_piece()
    :piece_color_(piece_color::nocolor), name_(""), display_string_(" ")
    {}