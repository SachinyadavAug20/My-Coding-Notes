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
  // do a level order traversal
  // then, in all level right most is rightSideView
  vector<int> rightSideView(TreeNode *root) {
    vector<int> ans;
    if(!root) return {};
    deque<TreeNode*> dq;
    dq.push_back(root);
    ans.push_back(root->val);
    while (!dq.empty()) {
      int n = dq.size();
      int v;
      while(n--) {
        TreeNode* t = dq.front();
        dq.pop_front();
        v=t->val;
        if(t->left) dq.push_back(t->left);
        if(t->right) dq.push_back(t->right); // as right side view
      }
      ans.push_back(v);
    }
    return ans;
  }
};
