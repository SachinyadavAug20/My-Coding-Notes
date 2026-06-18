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
class SolutionRecursive {
public:
  vector<int> ans;
  void postorder(TreeNode *root) {
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    ans.push_back(root->val);
  }
  vector<int> postorderTraversal(TreeNode *root) {
    ans.clear();
    postorder(root);
    return ans;
  }
};

class Solution {
public:
  vector<int> postorderTraversal(TreeNode *root) {
    vector<int> ans;
    stack<TreeNode*> st;
    st.push(root);
    stack<bool> visited;
    visited.push(false);
    TreeNode* cur;
    while(!st.empty()){
      cur=st.top();
      st.pop();
      bool v=visited.top();
      visited.pop();
      if(cur){
        if(v){
          ans.push_back(cur->val);
        }else {
          st.push(cur);
          visited.push(true);
          st.push(cur->right);
          visited.push(false);
          st.push(cur->left);
          visited.push(false);
        }
      }
    }
    return ans;
  }
};
