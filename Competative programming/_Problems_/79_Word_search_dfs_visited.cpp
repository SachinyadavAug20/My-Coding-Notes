// Given an m x n grid of characters board and a string word, return true if word exists in the grid.
//
// The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.

#include <bits/stdc++.h>
using namespace std;
#define ll long long

// https://leetcode.com/problems/word-search/description/?envType=problem-list-v2&envId=depth-first-search

void dfs(int i,int j,vector<vector<char>>& board,string word,int curr_index,bool &done ,vector<vector<bool>> &visited){
    if(curr_index==(word.size())){done=1;return;}
    

    int n=board.size(),m=board[0].size();
    if((i<0 || j<0)||(i>=n ||j>=m)) return;
    if(visited[i][j] || done)return;
    
    if(board[i][j]!=word[curr_index]) return;
    
    visited[i][j]=1;
                cout<<"Reached "<<curr_index<<"  "<<word[curr_index]<<"  "<<word.size()<<endl;
    curr_index++;
        dfs(i+1, j, board, word,curr_index,done,visited);
        dfs(i-1, j, board, word,curr_index,done,visited);
        dfs(i, j+1, board, word,curr_index,done,visited);
        dfs(i, j-1, board, word,curr_index,done,visited);
        visited[i][j]=0;
}

bool exist(vector<vector<char>>& board, string word) {
int n = board.size(), m = board[0].size();

    vector<int> freqBoard(128, 0), freqWord(128, 0);

    for (auto &row : board) {
        for (char c : row) {
            freqBoard[c]++;
        }
    }

    for (char c : word) {
        freqWord[c]++;
    }

    for (int i = 0; i < 128; i++) {
        if (freqWord[i] > freqBoard[i]) {
            return false; // impossible
        }
    }

    if (freqBoard[word[0]] > freqBoard[word.back()]) {
        reverse(word.begin(), word.end());
    }


    bool ans=0;
    for(int i=0;i<n;i++){ 
        for(int j=0;j<m;j++){
            if(board[i][j]==word[0]){
                vector<vector<bool>> visited(n,vector<bool>(m,0));
                dfs(i,j,board,word,0,ans,visited);
            }
        }
    }
     return ans;
}
int main(int argn, char *argv[]) {
    int n,m;
    cin>>n>>m;
    vector<vector<char>> board(n,vector<char>(m));
    for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>board[i][j];
    string word;
    cin>>word;
    cout<<exist(board, word);
  return 0;
}
