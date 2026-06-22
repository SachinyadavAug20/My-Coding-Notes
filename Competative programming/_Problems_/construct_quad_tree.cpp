#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Node {
public:
  bool val;
  bool isLeaf;
  Node *topLeft;
  Node *topRight;
  Node *bottomLeft;
  Node *bottomRight;

  Node() {
    val = false;
    isLeaf = false;
    topLeft = NULL;
    topRight = NULL;
    bottomLeft = NULL;
    bottomRight = NULL;
  }

  Node(bool _val, bool _isLeaf) {
    val = _val;
    isLeaf = _isLeaf;
    topLeft = NULL;
    topRight = NULL;
    bottomLeft = NULL;
    bottomRight = NULL;
  }

  Node(bool _val, bool _isLeaf, Node *_topLeft, Node *_topRight,
       Node *_bottomLeft, Node *_bottomRight) {
    val = _val;
    isLeaf = _isLeaf;
    topLeft = _topLeft;
    topRight = _topRight;
    bottomLeft = _bottomLeft;
    bottomRight = _bottomRight;
  }
};

class Solution {
public:
  // do recursion
  // O(n^2 * logn) time

  Node *dfs(vector<vector<int>> &grid, int n, int row, int col) {
    int allsame = 1;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (grid[row][col] != grid[row + i][col + j]) {
          allsame = 0;
          break;
        }
      }
    }
    if (allsame) { // leaf node
      return new Node(grid[row][col], true);
    }
    Node *newNode = new Node(grid[row][col], false);
    n = n / 2;
    newNode->topLeft = dfs(grid, n, row, col);
    newNode->topRight = dfs(grid, n, row, col + n);
    newNode->bottomLeft = dfs(grid, n, row + n, col);
    newNode->bottomRight = dfs(grid, n, row + n, col + n);
    return newNode;
  }

  Node *construct(vector<vector<int>> &grid) {
    Node *ans = dfs(grid, grid.size(), 0, 0);
    return ans;
  }
};
