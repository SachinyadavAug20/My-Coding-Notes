// Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.
//
// An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N=310;
void dfs(int i,int j,vector<vector<char>>& grid, vector<vector<bool>>& visited){
    int n=grid.size(),m=grid[0].size();
    if((i<0 || j<0)||(i>=n ||j>=m)) return;
    if(visited[i][j]||grid[i][j]=='0') return;
    visited[i][j]=true;
    dfs(i+1,j,grid, visited);
    dfs(i,j+1,grid, visited);
    dfs(i-1,j,grid, visited);
    dfs(i,j-1,grid, visited);
}
int numIslands(vector<vector<char>>& grid) {
    int cnt=0;
    vector<vector<bool>> visited(N, vector<bool>(N,false));
    int n=grid.size(),m=grid[0].size();
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (visited[i][j] || grid[i][j]=='0')  continue;
            cnt++;
            dfs(i,j,grid,visited);
        }
    }
    return cnt;
}

int main(int argn, char *argv[]) {
  return 0;
}



// https://leetcode.com/problems/number-of-islands/description/

