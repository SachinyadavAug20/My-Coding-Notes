#include <algorithm>
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
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution1 {
public:
  // make a vector of values and sort it to find kth smallest
  vector<int> vals;
  void dfs(TreeNode* root) {
    if(!root) return;
    vals.push_back(root->val);
    dfs(root->left);
    dfs(root->right);
  }
    int kthSmallest(TreeNode* root, int k) {
        vals.clear();
        dfs(root);
        sort(vals.begin(),vals.end());
        return vals[k-1];
    } // O(nlogn)  4% time beated
}; 


class Solution {
public:
    vector<int> vals;
    void dfs(TreeNode* root) {
      if(!root) return;
      dfs(root->left);
      vals.push_back(root->val);
      dfs(root->right);
    }
  // traverse BST in order to get sorted array
    int kthSmallest(TreeNode* root, int k) {
      vals.clear();
      dfs(root);
      return vals[k-1];
    } // O(n) 100% time beats
};


