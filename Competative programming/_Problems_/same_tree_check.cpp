#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};
class Solution {
public:
  bool same = 1;
  void dfs(TreeNode *p, TreeNode *q) {
    if (!p && !q)
      return;
    if (!p || !q) {
      same = 0;
    } else if (p->val != q->val) {
      same = 0;
    } else {
      dfs(p->left, q->left);
      dfs(p->right, q->right);
    }
  }
  bool isSameTree(TreeNode *p, TreeNode *q) {
    same = 1;
    dfs(p, q);
    return same;
  }
};
