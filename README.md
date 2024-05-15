# CSE 332 Lab Base
Repository for submitting lab work

Note: We will read this file as raw text rather than markdown.

Name: Samantha Hong
Lab #: 4

Document your lab work here according to the lab specification

# Design Comments
* I interpreted the instructions for the draw() method for TicTacToe to indicate that the method should return if there are no more empty squares to make moves ("if there are no more moves remaining and the game has not been completed successfully")
* Throughout my code, I refer to the vertical and horizontal coordinates of the board using their numerical value, except when referring to the strict bounds of the board (3 for TicTacToe, 19 for Gomoku). I thought it was more confusing for readers to try and create labels like valid_board_start and valid_board_end for every single different coordinate. This would be especially difficult for readers in the parts of my code where I check for winning moves, as there are many different combinations of positions that could create a win.
* Some of the methods for TicTacToe and Gomoku are implemented a little differently. I wanted to preserve my code from Lab 3 for TicTacToe, but a lot of my old code was not efficient for a larger board size. For example, when checking for valid input, my code for Gomoku is much more concise because I realized parsing for valid input is much more difficult when you don't know if the user is going to input a single or double-digit coordinate.
* My Gomoku board constructor fills in the board array with empty " " pieces to indicate empty spots. I realize it looks a little unsightly, but I found it very helpful for visualizing the dimensions of the board while coding different ways of winning/tie-ing.

# Errors/warnings
* I ran into a problem when trying to compare the user inputted horizontal and vertical coordinates with the bounds of the 3x3 board. My program would return that the user was trying to access out-of-bounds coordinates regardless of the actual input. I realized that the user inputted values were chars and subtracted '0' from their ASCII values to get the actual integer input.
* The draw() method was very difficult to implement for Gomoku. I kept accessing data outside of the array, which ended up in a lot of problems. I fixed this by adjusting my for-loops and if statements to not go out of bounds.

# Test cases
./lab_4 TicTacToe
Player X: 1,1; 1,2; 1,3;
Player O: 2,1; 3,1;
output: "Player X won the game!" returned with code success
Correct behavior

./lab_4 TicTacToe
Attempt to input 5,5 or -1,2
output: "Row and column must be in the range 1-3" and re-prompts user for move
Correct behavior

./lab_4 TicTacToe
Player X: 1, 1;
Attempt to input 1,1 for Player O
output: "That square is taken, please make a different valid move" and re-prompts user for move
Correct behavior

./lab_4 TicTacToe
Player X: 1,1; 2,1; 1,3; 3,2; 3,3;
Player O: 1,2; 3,1; 2,2; 2,3;
output: "9 turns were played. No winning moves remain." returned with code game_draw
Correct behavior

./lab_4 TicTacToe
Player X: 1,1; 3,2;
Player O: 2,2;
Inputted "quit"
output: "3 turns were played. User quit to end game." returned with code user_quit
Correct behavior

./lab_4 NotCorrect
output: "usage: ./lab_3 <NameOfGame>"
Returned with code wrong_command_line_args
Correct behavior

./lab_4 Gomoku
Player B: 1,1; 1,2; 1,3; 1,4; 1,5
Player W: 2,1; 3,1; 8,8; 9,9;
output: "Player B won the game!" returned with code success
Correct behavior

./lab_4 Gomoku
Attempt to input 20,20 or -1,2 or randomInput
output: "Row and column must be in the correct range" and re-prompts user for move
Correct behavior

./lab_4 Gomoku
Player B: 1, 1;
Attempt to input 1,1 for Player W
output: "That square is taken, please make a different valid move" and re-prompts user for move
Correct behavior

./lab_4 Gomoku
Player B: 1,1; 3,2;
Player W: 2,2;
Inputted "quit"
output: "3 turns were played. User quit to end game." returned with code user_quit
Correct behavior

