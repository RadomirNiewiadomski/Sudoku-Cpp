#include <iostream>
#include "Board.h"
#include <string>

using namespace std;

bool is_number_valid(int number)
{
    if (number < 10 && number > 0)
        return true;
    return false;
}

int read_input()
{
    do
    {
        int input{};
        cin >> input;
        if (cin.good())
        {
            return input;
        }
        else
        {
            cout << "Error - entered number must be integer";
            cin.clear();
        }
    } while (cin.fail());
}

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
    cout << "Press any key to start the game: ";
    cin >> gamer_answer;
    cout << "\n";
    Board my_board;
    int row{};
    int column{};
    int guess{};
    my_board.display();
    while (my_board.is_board_complete() == false)
    {
        cout << "\nEnter a row (1-9): ";
        row = read_input();
        cout << "\nEnter a column (1-9): ";
        column = read_input();
        cout << "\nEnter your guess (1-9): ";
        guess = read_input();
        cout << "\n";
        if (is_number_valid(row) && is_number_valid(column) && is_number_valid(guess))
        {
            my_board.insert_element(row, column, guess);
        }
        else
        {
            cout << "\nError - row, column or guess is out of scope (must be 1-9)" << endl;
        }
        my_board.display();
        cout << "Press any key to continue or press q to quit the game: ";
        cin >> gamer_answer;
        if (gamer_answer == "q")
        {
            cout << "\nYou've quit the game. Goodbye" << endl;
            break;
        }
    }
    if (my_board.is_board_complete() == true)
    {
        if (my_board.is_board_correct() == true)
        {
            cout << "\nCongratulation, correct answers! You've successfully completed sudoku!" << endl;
        }
        else
        {
            cout << "\nSorry, you've failed. Your sudoku is not correct, please try again." << endl;
        }
    }
    return 0;
}