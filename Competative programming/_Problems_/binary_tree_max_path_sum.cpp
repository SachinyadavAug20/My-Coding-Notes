#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
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
  // at each node we have 2 path
  // is want to take both can't take parent
  // for anynode sum including it is sum of children sum including it
  // else return value of dfs ->  postorder
  // for each node [maxSum if no split, with split]
  // return to parent only without split
  //
  int ans = INT_MIN;
  int dfs(TreeNode *root) {
    if (!root->left && !root->right)
      return root->val;
    int sum_l_r_ms = 0, max_l_r_ms = INT_MIN;
    if (root->left) {
      int ms = dfs(root->left);
      sum_l_r_ms += ms;
      max_l_r_ms = max(max_l_r_ms, ms);
    }
    if (root->right) {
      int ms = dfs(root->right);
      sum_l_r_ms += ms;
      max_l_r_ms = max(max_l_r_ms, ms);
    }
    int withSplit = root->val + sum_l_r_ms;
    ans = max(ans, max(withSplit, max_l_r_ms));
    return max(max_l_r_ms + root->val,root->val); // not necessary to include children
  }
  int maxPathSum(TreeNode *root) {
    ans = INT_MIN;
    ans = max(ans, dfs(root));
    return ans;
  } // O(n)
};
