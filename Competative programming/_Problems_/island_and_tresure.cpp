#include <bits/stdc++.h>
#include <climits>
#include <deque>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;
#define ll long long

class Solution1 {
public:
  // need to find shortest path from that point to treasure(0)
  // as all step l,r,u,d is 1 unit thus un-weighted graph
  // can do dfs for it
  // sprind dfs from treasure
  //
  void dfs(vector<vector<int>> &grid, vector<vector<int>> &v, int i, int j,
           int dist = 0) {
    int n = grid.size(), m = grid[0].size();
    if ((i < 0 || j < 0) || ((i >= n || j >= m)))
      return;
    if (grid[i][j] == -1)
      return;
    grid[i][j] = min(grid[i][j], dist);
    if (v[i][j])
      return; // wall
    v[i][j] = 1;
    dfs(grid, v, i + 1, j, dist + 1);
    dfs(grid, v, i - 1, j, dist + 1);
    dfs(grid, v, i, j - 1, dist + 1);
    dfs(grid, v, i, j + 1, dist + 1);
  }
  void islandsAndTreasure(vector<vector<int>> &grid) {
    int n = grid.size(), m = grid[0].size();
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (grid[i][j] == 0) {
          vector<vector<int>> v(n, vector<int>(m, 0));
          dfs(grid, v, i, j);
        }
      }
    }
  } // wrong can't be solved by dfs
};

class Solution {
public:
  // need to do bfs
  // bfs from multiple points
  unordered_set<string> v;
  void addNeighbours(vector<vector<int>> &grid, queue<pair<int, int>> &q, int i,
                     int j) {
    int n = grid.size(), m = grid[0].size();
    if ((i < 0 || j < 0) || ((i >= n || j >= m)))
      return;
    string s = to_string(i) + " " + to_string(j);
    if (v.find(s) != v.end() || grid[i][j] == -1)
      return;
    v.insert(s);
    q.push({i, j});
  }
  void islandsAndTreasure(vector<vector<int>> &grid) {
    int n = grid.size(), m = grid[0].size();
    queue<pair<int, int>> q;
    v.clear();
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (grid[i][j] == 0) {
          q.push({i, j});
          v.insert(to_string(i) + " " + to_string(j));
        }
      }
    }
    int dist = 0;
    while (!q.empty()) {
      int nn = q.size();
      while (nn--) {
        auto p = q.front();
        q.pop();
        int i = p.first, j = p.second;
        grid[i][j] = min(grid[i][j], dist);
        addNeighbours(grid, q, i + 1, j);
        addNeighbours(grid, q, i - 1, j);
        addNeighbours(grid, q, i, j + 1);
        addNeighbours(grid, q, i, j - 1);
      }
      dist++;
    }
  }
};
