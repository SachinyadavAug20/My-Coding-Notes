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
  // 2 part find and compare
  bool compareTree(TreeNode *p, TreeNode *q) {
    if (!p && !q)
      return 1;
    if (!p || !q) {
      return 0;
    } else if (p->val != q->val) {
      return 0;
    }
    int lc = compareTree(p->left, q->left);
    int rc = compareTree(p->right, q->right);
    return lc && rc;
  }

  bool dfs(TreeNode *root, TreeNode *subtree) {
    if (!root && !subtree)
      return 1;
    if (!root && subtree)
      return 0;
    if (root && !subtree)
      return 0;
    int ylc, yrc, nlc,
        nrc; // y-> yes, n-> no, lc-> left child, rc-> right child
    if (root->val == subtree->val) {
      ylc = compareTree(root->left, subtree->left);
      yrc = compareTree(root->right, subtree->right);
      if (ylc && yrc) return 1;
    }
    nlc = dfs(root->left, subtree);
    nrc = dfs(root->right, subtree);
    return (nlc || nrc);
  }
  bool isSubtree(TreeNode *root, TreeNode *subRoot) {
    return dfs(root, subRoot);
  } // O(n)
};
