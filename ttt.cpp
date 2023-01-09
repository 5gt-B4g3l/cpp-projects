#include <iostream>
#include <vector>
#include "ttt.hpp"
using namespace std;

int main(){
    vector<char> board = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    vector<int> invalid;
    int move, u1, u2;
    int i = 0;

    cout <<"====Let's play some Tic-Tac-Toe!====\n";
    boardgraph(board);
    
    while(i <= 8) {
        
        i++;
        cout << "Player 1, make your move!";
        cin >> u1;
        while(validity(u1, invalid)){
            cout << "are you trying to cheat player 1? Try again: \n";
            cin >> u1;
        }
        invalid.push_back(u1);
        
        
        i++;
        if(i <= 8){
            cout << "Player 2, make your move!";
            cin >> u2, invalid;
            while(validity(u2, invalid)){
                cout << "are you trying to cheat player 2? Try again: \n";
                cin >> u2;
            }
            invalid.push_back(u2);
        }
        
        board = moves(u1-1, u2-1, board);
        boardgraph(board);
    }
    cout << checkwin(board) << " wins!\n";
    

}

