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
  void preorder(TreeNode *root) {
    if(root==NULL) return;
    ans.push_back(root->val);
    preorder(root->left);
    preorder(root->right);
  }
  vector<int> preorderTraversal(TreeNode *root) {
    ans.clear();
    preorder(root);
    return ans;
  }
};
class SolutionIterative {
public:
  vector<int> preorderTraversal(TreeNode *root) {
    vector<int> ans;
    stack<TreeNode*> st;
    TreeNode* cur=root;
    while(cur!=NULL || !st.empty()){
      if(cur){
        ans.push_back(cur->val);
        st.push(cur->right); // directly go right
        cur=cur->left;
      }else{
        cur=st.top();
        st.pop();
      }
    }
    return ans;
  }
};
