#include <algorithm>
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

class Solution1 {
public:
  bool isValidBST(TreeNode *root) {
    if (!root)
      return true;
    // BST condition
    if (root->left && root->left->val > root->val)
      return false;
    if (root->right && root->right->val < root->val)
      return false;
    return isValidBST(root->left) && isValidBST(root->right);
  } // wrong
};

class Solution {
public:
  bool isV = 1;
  void dfs(TreeNode *root, long Min, long Max) {
    if (!root) return;
    if (root->val <= Min || root->val >= Max) {
      isV = 0;
      return;
    }
    dfs(root->left, Min, min(root->val*1LL, Max*1LL));
    dfs(root->right, max(root->val*1LL, Min*1LL), Max);
  }
  bool isValidBST(TreeNode *root) {
    if (!root) return true;
    isV = 1;
    dfs(root, LLONG_MIN, LLONG_MAX);
    return isV;
  }
};
