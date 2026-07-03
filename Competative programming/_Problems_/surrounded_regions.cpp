#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define for0(i, n) for (int i = 0; i < n; i++)

class SolutionWA {
public:
  // plan
  // dfs will bool -> if border by x or not
  bool dfs(vector<vector<char>> &board, vector<vector<int>> &v, int i, int j) {
    int n = board.size(), m = board[0].size();
    if ((i < 0 || j < 0) || (i >= n || j >= m))
      return false;
    if (board[i][j] == 'X')
      return true;
    if (v[i][j])
      return // undefined reason of circular dependancy
          v[i][j] = 1;
    int left = dfs(board, v, i, j - 1);
    int right = dfs(board, v, i, j + 1);
    int top = dfs(board, v, i - 1, j);
    int bottom = dfs(board, v, i + 1, j);
    if (left && right && top && bottom) {
      board[i][j] = 'X';
    }
    return left && right && top && bottom;
  }
  void solve(vector<vector<char>> &board) {
    int n = board.size(), m = board[0].size();
    vector<vector<int>> vist(n, vector<int>(m, 0));
    for0(i, n) {
      for0(j, m) {
        if (board[i][j] == 'O' && !vist[i][j]) {
          dfs(board, vist, i, j);
        }
      }
    }
  } // wrong becuase has circular dependancy
};

class Solution {
public:
  // plan
  // start from border mark all cell connected to brder as visited
  // then, all cell with 0 and not visited -> mark as x
  //
  void dfs(vector<vector<char>> &board, vector<vector<int>> &v, int i, int j) {
    int n = board.size(), m = board[0].size();
    if ((i < 0 || j < 0) || (i >= n || j >= m))
      return;
    if (board[i][j] == 'X')
      return;
    if (v[i][j])
      return;
    v[i][j] = 1;
    dfs(board, v, i + 1, j);
    dfs(board, v, i - 1, j);
    dfs(board, v, i, j - 1);
    dfs(board, v, i, j + 1);
  }
  void solve(vector<vector<char>> &board) {
    int n = board.size(), m = board[0].size();
    vector<vector<int>> v(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
      dfs(board, v, i, 0);
      dfs(board, v, i, m - 1);
    }
    for (int i = 0; i < m; i++) {
      dfs(board, v, 0, i);
      dfs(board, v, n - 1, i);
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (!v[i][j] && board[i][j] == 'O')
          board[i][j] = 'X';
      }
    }
  }
};
