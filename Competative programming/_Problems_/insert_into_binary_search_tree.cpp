#include <bits/stdc++.h>
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
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* tmp=root;
        TreeNode* prev=root;
        while (tmp) {
          prev=tmp;
          if(tmp->val>val){
            tmp=tmp->left;
          }else {
            tmp=tmp->right;
          }
        }
        TreeNode* nn=new TreeNode(val);
        if(prev){
          if(prev->val>val){
            prev->left=nn;
          }else {
            prev->right=nn;
          }
        }else {
          root=nn;
        }
        return root;
    }
};
