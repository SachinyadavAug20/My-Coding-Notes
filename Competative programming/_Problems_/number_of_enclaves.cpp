#include <iostream>
#include <vector>

using namespace std;

// plan
// go to all border cells find all of then -> and mark full those island =0
// then, no of 1 survived is the answer

class Solution {
public:
  void dfs(int r, int c, vector<vector<int>> &grid) {
    int rows = grid.size();
    int cols = grid[0].size();

    if (r < 0 || r >= rows || c < 0 || c >= cols || grid[r][c] == 0) return;
    

    grid[r][c] = 0;

    dfs(r + 1, c, grid);
    dfs(r - 1, c, grid);
    dfs(r, c + 1, grid);
    dfs(r, c - 1, grid);
  }

  int numEnclaves(vector<vector<int>> &grid) {
    int rows = grid.size();
    int cols = grid[0].size();

    for (int i = 0; i < rows; i++) {
      if (grid[i][0] == 1)
        dfs(i, 0, grid);
      if (grid[i][cols - 1] == 1)
        dfs(i, cols - 1, grid);
    }

    for (int j = 0; j < cols; j++) {
      if (grid[0][j] == 1)
        dfs(0, j, grid);
      if (grid[rows - 1][j] == 1)
        dfs(rows - 1, j, grid);
    }

    int count = 0;
    for (int i = 0; i < rows; i++) {
      for (int j = 0; j < cols; j++) {
        if (grid[i][j] == 1) {
          count++;
        }
      }
    }

    return count;
  }
};
