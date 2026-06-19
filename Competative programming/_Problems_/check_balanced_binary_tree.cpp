#include <bits/stdc++.h>
#include <unordered_map>
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
  bool balanced = 1;
  int bfs(TreeNode *n) { // return height
    if (n == NULL) return 0;
    int lh = bfs(n->left);
    int rh = bfs(n->right);
    if(abs(lh-rh)>1) balanced=0;
    return 1 + max(lh, rh);
  }
  bool isBalanced(TreeNode *root) {
    balanced = 1; // assume balanced
    bfs(root);
    return balanced;
  }
};
