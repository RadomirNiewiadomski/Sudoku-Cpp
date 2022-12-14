#ifndef BOARD_H
#define BOARD_H
#include <vector>
#include <string>

using namespace std;

class Board
{
    vector<vector<string>> board = {{"4", "8", "3", "9", "2", "6", "5", "7", "*"},
                                    {"1", "9", "2", "5", "3", "7", "6", "8", "4"},
                                    {"7", "6", "5", "1", "8", "4", "3", "9", "2"},
                                    {"6", "2", "4", "3", "7", "9", "1", "5", "8"},
                                    {"8", "5", "9", "6", "4", "1", "7", "2", "3"},
                                    {"3", "7", "1", "8", "5", "2", "4", "6", "9"},
                                    {"5", "1", "7", "2", "9", "3", "8", "4", "6"},
                                    {"2", "3", "8", "4", "6", "5", "9", "1", "7"},
                                    {"9", "4", "6", "7", "1", "8", "2", "3", "5"}};

    vector<vector<string>> board_correct = {{"4", "8", "3", "9", "2", "6", "5", "7", "1"},
                                            {"1", "9", "2", "5", "3", "7", "6", "8", "4"},
                                            {"7", "6", "5", "1", "8", "4", "3", "9", "2"},
                                            {"6", "2", "4", "3", "7", "9", "1", "5", "8"},
                                            {"8", "5", "9", "6", "4", "1", "7", "2", "3"},
                                            {"3", "7", "1", "8", "5", "2", "4", "6", "9"},
                                            {"5", "1", "7", "2", "9", "3", "8", "4", "6"},
                                            {"2", "3", "8", "4", "6", "5", "9", "1", "7"},
                                            {"9", "4", "6", "7", "1", "8", "2", "3", "5"}};

public:
    Board();
    ~Board();
    void display() const;
    void insert_element(int row, int column, int guess);
    bool is_board_complete();
    bool is_board_correct();
};

#endif