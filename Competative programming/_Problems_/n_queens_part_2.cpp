#include <bits/stdc++.h>
#include <unordered_set>
#include <vector>
using namespace std;
#define ll long long

class Solution {
public:
    int ans=0;
    int n;
    void dfs(int i,vector<string> &board,unordered_set<int> &col, unordered_set<int> &pDia, unordered_set<int> &nDia){
        if(i==n){
            ans++;
            return;
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
    int totalNQueens(int n) {
        ans=0;
        this->n=n;
        unordered_set<int> col;
        unordered_set<int> pDia;
        unordered_set<int> nDia;
        vector<string> board(n,string(n,'.'));
        dfs(0, board, col, pDia, nDia);
        return ans;
    }
};
