#include "Board.h"
#include <string>
#include <iostream>

Board::Board() // board for easy mode
{
}

Board::~Board()
{
}

void Board::display() const
{
    for (auto row : board)
    {
        for (auto element : row)
        {
            cout << element << " ";
        }
        cout << "\n";
    }
}

void Board::insert_element(int row, int column, int guess)
{
    if (board[row - 1][column - 1] == "*")
    {
        board[row - 1][column - 1] = to_string(guess);
    }
    else
    {
        cout << "Incorrect position! Choose an empty space from the board (marked as *). Try again" << endl;
    }
}