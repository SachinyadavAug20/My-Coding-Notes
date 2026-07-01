#include <bits/stdc++.h>
using namespace std;
#define ll long long

class SolutionTLE {
public:
  // can do O((n*m)^2)
  // pacific is at -> when, index non-valide=> if i = -1 or j = -1
  // atlantic is at -> when, index non-valide=> if i = n or j = m
  //
  int reachPacific = 0;
  int reachAtlanic = 0;
  int n, m;
  void dfs(vector<vector<int>> &heights, vector<vector<int>> &visited, int i,
           int j, int prevHeight = INT_MAX) {
    if (i == -1 || j == -1) {
      reachPacific = 1;
      return;
    } else if (i == n || j == m) {
      reachAtlanic = 1;
      return;
    }
    if (prevHeight < heights[i][j])
      return;
    if (visited[i][j])
      return;
    visited[i][j] = 1;
    dfs(heights, visited, i + 1, j, heights[i][j]);
    dfs(heights, visited, i - 1, j, heights[i][j]);
    dfs(heights, visited, i, j + 1, heights[i][j]);
    dfs(heights, visited, i, j - 1, heights[i][j]);
  }
  vector<vector<int>> pacificAtlantic(vector<vector<int>> &heights) {
    n = heights.size(), m = heights[0].size();
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        vector<vector<int>> visited(n, vector<int>(m, 0));
        reachAtlanic = 0;
        reachPacific = 0;
        dfs(heights, visited, i, j);
        if (reachAtlanic && reachPacific)
          ans.push_back({i, j});
      }
    }
    return ans;
  } // O(n*m ^2) TLE 
};

class Solution {
public:
  // dfs from pacific and atlantic
  // try to flow to other side
  //
  vector<vector<int>> ans;
  void dfs(vector<vector<int>> &heights, int i, int j, set<pair<int, int>> &s,
           int prevHeight) {
    if (s.find({i, j}) != s.end())
      return;
    if ((i < 0 || j < 0) || (i >= heights.size() || j >= heights[0].size()))
      return;
    if (heights[i][j] < prevHeight)
      return;
    s.insert({i,j});
    dfs(heights, i + 1, j, s, heights[i][j]);
    dfs(heights, i - 1, j, s, heights[i][j]);
    dfs(heights, i, j - 1, s, heights[i][j]);
    dfs(heights, i, j + 1, s, heights[i][j]);
  }
  vector<vector<int>> pacificAtlantic(vector<vector<int>> &heights) {
    int n = heights.size(), m = heights[0].size();
    set<pair<int, int>> pac;
    set<pair<int, int>> alt;

    for (int i = 0; i < m; i++) {
      dfs(heights, 0, i, pac, heights[0][i]);
      dfs(heights, n - 1, i, alt, heights[n - 1][i]);
    }
    for (int i = 0; i < n; i++) {
      dfs(heights, i, 0, pac, heights[i][0]);
      dfs(heights, i, m - 1, alt, heights[i][m - 1]);
    }
    ans.clear();
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        pair<int, int> p = {i, j};
        if(alt.find(p)!=alt.end() && pac.find(p)!=pac.end()) ans.push_back({i,j});
      }
    }
    return ans;
  } // O(n*m) passed
};
