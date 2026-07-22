#include <bits/stdc++.h>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;
#define ll long long

class Solution {
public:
    // plan
    // backtrack and brute force will work
    // queue moves -> up,down,left,right and diagonals any amount of steps
    // for no attaches
    // OBSERVATION
    // 1. every queue will be in different row
    // 2. every queue will be in different col
    // 3. every queue will be in different diagonal(+ve and -ve separatly)
    // do row by row and add a queue to the row(storing col which has 1 queue already)
    // need to keep track of col and diagonal(+ve and -ve) using set
    // how to do it for diagonals using set
    // -ve diagonals -> have same pattern(both row and col decrease/increase) like i=j is diagonal -> r-c=constant
    // +ve diagonals -> have same pattern(row increases/decrease and col decrease/increase) like i+j=constant
    //
    vector<vector<string>> ans;
    int n;
    void dfs(int i,vector<string> &board,unordered_set<int> &col,unordered_set<int> &pDia,unordered_set<int> &nDia){
        if(i==n){
            ans.push_back(board);
        }
        for(int c=0;c<n;c++){
            if((col.find(c)!=col.end()) || (pDia.find(i+c)!=pDia.end()) || (nDia.find(i-c)!=nDia.end())) continue;
            board[i][c]='Q';
            col.insert(c);
            pDia.insert(i+c);
            nDia.insert(i-c);
            dfs(i+1,board,col,pDia,nDia);

            board[i][c]='.';
            col.erase(c);
            pDia.erase(i+c);
            nDia.erase(i-c);
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        ans.clear();
        this->n=n;
        unordered_set<int> col;
        unordered_set<int> pDia; // i+j
        unordered_set<int> nDia; // i-j
        string row="";
        for(int i=0;i<n;i++)row+='.';
        vector<string> board(n,row);
        dfs(0, board, col, pDia, nDia);
        return ans;
    }
};
