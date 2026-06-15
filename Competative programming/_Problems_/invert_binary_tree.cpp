// https://leetcode.com/problems/invert-binary-tree/submissions/2034309233/
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
    void invert(TreeNode* root){
      if(root==NULL) return;
      invertTree(root->left);
      invertTree(root->right);
      TreeNode* left=root->left;
      root->left=root->right;
      root->right=left;
    }
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }
};
