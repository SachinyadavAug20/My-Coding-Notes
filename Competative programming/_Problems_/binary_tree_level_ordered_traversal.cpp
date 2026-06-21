#include <bits/stdc++.h>
#include <deque>
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
  vector<vector<int>> levelOrder(TreeNode *root) {
    // use queue to store it
    if (!root)
      return {};
    vector<vector<int>> ans;
    deque<TreeNode *> dq;
    dq.push_back(root);
    while (!dq.empty()) {
      vector<int> a;
      int n=dq.size();
      while (n--) {
        TreeNode *t = dq.front();
        dq.pop_front();
        a.push_back(t->val);
        if (t->left) {
          dq.push_back(t->left);
        }
        if (t->right) {
          dq.push_back(t->right);
        }
      }
      ans.push_back(a);
    }
    return ans;
  }
};
