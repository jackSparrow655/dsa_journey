#include <iostream>
#include <vector>
using namespace std;

// Define the game board
vector<vector<char>> board{{'-', '-', '-'},
                            {'-', '-', '-'},
                            {'-', '-', '-'}};

// Define the players
char player1 = 'X';
char player2 = 'O';

// Define the function to display the game board
void display_board() {
    for (const auto& row : board) {
        for (const auto& cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }
}

// Define the function to check for a winner
bool check_winner(char player) {
    // Check the rows
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
    }
    // Check the columns
    for (int i = 0; i < 3; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }
    // Check the diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    }
    return false;
}

int main() {
    // Define the game loop
    bool game_over = false;
    int turn = 0;
    while (!game_over) {
        // Display the game board
        display_board();
        // Get input from the current player
        char player_marker = turn % 2 == 0 ? player1 : player2;
        int row, col;
        cout << "Player " << (turn % 2 == 0 ? 1 : 2) << ", select a row and column to place your marker." << endl;
        cout << "Row (1-3): ";
        cin >> row;
        cout << "Column (1-3): ";
        cin >> col;
        // Check the input
        while (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != '-') {
            cout << "Invalid position. Please select another position." << endl;
            cout << "Row (1-3): ";
            cin >> row;
            cout << "Column (1-3): ";
            cin >> col;
        }
        // Update the game board
        board[row - 1][col - 1] = player_marker;
        // Check for a winner
        if (check_winner(player_marker)) {
            display_board();
            cout << "Player " << (turn % 2 == 0 ? 1 : 2) << " wins!" << endl;
            game_over = true;
        }
        // Check for a tie
        if (!game_over) {
            int count = 0;
            for (const auto& row : board) {
                for (const auto& cell : row) {
                    if (cell == '-') {
                        count++;
                    }
                }
            }
            if (count == 0) {
                display_board();
                cout << "The game is a tie!";
            }
        }
    }
}
