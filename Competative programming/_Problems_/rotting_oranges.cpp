#include <bits/stdc++.h>
#include <queue>
#include <utility>
using namespace std;
#define ll long long

class Solution {
public:
  // plan
  // do bfs from rotting oranges
  // need shortest path from
  // 
  //
  bool addNeighbours(vector<vector<int>> &grid, vector<vector<int>>& v, queue<pair<int, int>> &q, int i,int j){
    int n = grid.size(), m = grid[0].size();
    if((i<0||j<0)||(i>=n||j>=m)) return 0;
    if(grid[i][j]==0 || v[i][j]) return 0;
    v[i][j]=1;
    grid[i][j]=-1;
    q.push({i,j});
    return 1;
  }

  int orangesRotting(vector<vector<int>> &grid) {
    queue<pair<int, int>> q;
    int n = grid.size(), m = grid[0].size();
    vector<vector<int>> v(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (grid[i][j] == 2) {
          q.push({i, j});
          v[i][j]=1;
        }
      }
    }
    int time = 0;
    while (!q.empty()) {
      int c=q.size();
      bool roted=0;
      while (c--) {
        auto p=q.front();
        q.pop();
        int i=p.first,j=p.second;
        roted|=addNeighbours(grid, v, q, i+1, j);
        roted|=addNeighbours(grid, v, q, i-1, j);
        roted|=addNeighbours(grid, v, q, i, j-1);
        roted|=addNeighbours(grid, v, q, i, j+1);
      }
      if(roted){
        time++;
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(grid[i][j]==1) return -1;
      }
    }
    return time;
  }
};
