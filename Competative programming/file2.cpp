#include <bits/stdc++.h>
#include <set>
#include <string>
using namespace std;
#define ll long long

void printprimefactors(vector<pair<int, int>> a);
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a);
void printVectSS(vector<pair<pair<int, int>, int>> a);

void printImage(vector<vector<int>> a) {
  for (auto v : a) {
    for (int n : v) {
      cout << n << " ";
    }
    cout << endl;
  }
}

// https://leetcode.com/problems/longest-increasing-path-in-a-matrix/description/  
// here, increasing order will do work of visited array
const int N = 10;
int cc=0;

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
/*
 3 3
7 7 5
2 4 6
8 2 0
 */

/*
 https://codeforces.com/contest/776/problem/B
 https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/
https://leetcode.com/problems/longest-increasing-path-in-a-matrix/description/
https://leetcode.com/problems/pacific-atlantic-water-flow/description/
https://leetcode.com/problems/island-perimeter/description/
https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1?category=
      https://cp-algorithms.com/graph/depth-first-search.html
    https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1?category=
    https://www.geeksforgeeks.org/explore?page=1&sortBy=submissions&_gl=1*1fcocz3*_up*MQ..*_gs*MQ..
    https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?page=1&sortBy=submissions
https://leetcode.com/problems/number-of-islands/description/
 */

void printVect(vector<unsigned> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << "(" << a[i].first.first << "," << a[i].first.second << ") " << "("
         << a[i].second.first << "," << a[i].second.second << ") " << endl;
  }
}
void printVectSS(vector<pair<pair<int, int>, int>> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << a[i].first.first << " " << a[i].first.second << " > " << a[i].second
         << endl;
  }
}

void printprimefactors(vector<pair<int, int>> a) {
  for (auto pr : a) {
    cout << pr.first << "^" << pr.second << " ";
  }
  cout << endl;
}


