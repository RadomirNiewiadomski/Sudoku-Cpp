#include <iostream>
#include "Board.h"
#include <string>

using namespace std;

int main()
{
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