#include <iostream>
#include <vector>
using namespace std;

void boardgraph(vector<char> board);
vector<char> moves(int u1, int u2, vector<char> board);
bool validity(int input, vector<int> invalid);
string checkwin(vector<char> board);