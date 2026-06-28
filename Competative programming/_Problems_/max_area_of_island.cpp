#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long

class Solution {
public:
  int dfs(vector<vector<int>> &grid, vector<vector<int>> &visited, int i,
          int j) {
    int n = grid.size(), m = grid[0].size();
    if((i<0 || j<0)||(i>=n ||j>=m)) return 0;
    if (grid[i][j] == 0 || visited[i][j]) return 0;
    visited[i][j]=1;
    int area = 1;
    area += dfs(grid, visited, i + 1, j);
    area += dfs(grid, visited, i - 1, j);
    area += dfs(grid, visited, i, j + 1);
    area += dfs(grid, visited, i, j - 1);
    return area;
    
  }
  int maxAreaOfIsland(vector<vector<int>> &grid) {
    int n = grid.size(), m = grid[0].size();
    vector<vector<int>> visited(n, vector<int>(m,0));
    int maxArea = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        int area = dfs(grid, visited, i, j);
        maxArea = max(maxArea, area);
      }
    }
    return maxArea;
  }
};
