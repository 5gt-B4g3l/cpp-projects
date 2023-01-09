#include <iostream>
#include<vector>
using namespace std;

void boardgraph(vector<char> board) {
    cout << " " << board[0] << " " << "|" << " " << board[1] << " " << '|' << " " << board[2] << " " << endl;
    cout << "___|___|___\n";
    cout << " " << board[3] << " " << '|' << " " << board[4] << " " << '|' << " " << board[5] << " " << endl;
    cout << "___|___|___\n";
    cout << " " << board[6] << " " << '|' << " " << board[7] << " " << '|' << " " << board[8] << " " << endl;
}

vector<char> moves(int u1, int u2, vector<char> board){
    if(board[u1])
    board[u1] = 'X';
    board[u2] = 'O';
    return board;
}

bool validity(int input, vector<int> invalid){
    bool notvalid = false;
    for(int i = 0; i < invalid.size(); i++){
        if (input == invalid[i]){
            notvalid = true;
        }
    }
    return notvalid;
}

string checkwin(vector<char> board){
    string winner;
    if(board[0] && board[1] && board[2] || board[3] && board[4] && board[5] || board[6] && board[7] && board[8] || board[0] && board[3] && board[6] || board[1] && board[4] && board[7] || board[2] && board[5] && board[8] || board[0] && board[4] && board[8] || board[2] && board[4] && board[6] == 'X'){
        winner = "Player 1";
    }
    else if(board[0] && board[1] && board[2] || board[3] && board[4] && board[5] || board[6] && board[7] && board[8] || board[0] && board[3] && board[6] || board[1] && board[4] && board[7] || board[2] && board[5] && board[8] || board[0] && board[4] && board[8] || board[2] && board[4] && board[6] == 'O'){
        winner = "Player 2";
    }
    else{
        winner = "Nobody";
    }
    return winner;
}