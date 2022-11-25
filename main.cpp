#include <iostream>
#include "Board.h"
#include <string>

using namespace std;

int main()
{
    string gamer_answer{};
    cout << "\n~~~~~~~~~~Welcome to Sudoku!~~~~~~~~~~" << endl;
    cout << "At first read the main rules to play the game:" << endl;
    cout << "Size of the sudoku board is 9x9." << endl;
    cout << "Each row has all numbers from 1 to 9." << endl;
    cout << "Each column has all numbers from 1 to 9." << endl;
    cout << "Each 3x3 grid box has all numbers from 1 to 9." << endl;
    cout << "To insert number: select a row, then a column." << endl;
    cout << "Choose your guess from 1 to 9." << endl;
    cout << "Have fun!" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cin >> gamer_answer;
    cout << "Press any key to start the game: ";
    Board my_board;
    int row{};
    int column{};
    int guess{};
    my_board.display();
    cout << "row:";
    cin >> row;
    cout << "column:";
    cin >> column;
    cout << "guess:";
    cin >> guess;
    my_board.insert_element(row, column, guess);
    my_board.display();
    return 0;
}