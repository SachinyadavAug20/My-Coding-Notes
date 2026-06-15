#include <bits/stdc++.h>
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
  vector<int>ans;
  void inorder(TreeNode *root) {
    if(root==NULL) return;
    inorder(root->left);
    inorder(root);
    inorder(root->right);
    ans.push_back(root->val);
  }
  vector<int> inorderTraversal(TreeNode *root) { 
    ans.clear();
    inorder(root);
    return ans;
  }
};
