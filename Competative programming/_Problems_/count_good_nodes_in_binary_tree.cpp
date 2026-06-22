#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
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
  // do dfs for path then check
  int ans = 0;
  void dfs(TreeNode *root, int currMax) {
    if (root == NULL)
      return;
    if (currMax <= root->val)
      ans++;
    currMax = max(currMax, root->val);
    dfs(root->left, currMax);
    dfs(root->right, currMax);
  }
  int goodNodes(TreeNode *root) {
    ans = 0;
    dfs(root, INT_MIN);
    return ans;
  }
};
