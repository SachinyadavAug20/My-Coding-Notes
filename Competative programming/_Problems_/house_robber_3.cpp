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
  // can't rob adjust nodes
  // there 2 case with root
  // take root or not
  // can do dfs
  // react node gives pair of value of [with node maxprofit,with out]
  // for any node
  // max withnode= value + left value without it + left[0]
  // max without= left[0]+right[0]

  pair<long, long> dfs(TreeNode *root) {
    if (root == NULL)
      return {0, 0};

    auto pl = dfs(root->left);
    auto pr = dfs(root->right);

    long maxWith = root->val + pl.second + pr.second;

    // This is wrong as maximum
    // long maxWithout=pl.first+pr.first;

    long maxWithout = max(pl.first, pl.second) + max(pr.first, pr.second);
    return {maxWith, maxWithout};
  }
  int rob(TreeNode *root) {
    auto p = dfs(root);
    return max(p.first, p.second);
  }
};
