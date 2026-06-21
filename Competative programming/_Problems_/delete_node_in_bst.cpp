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
  // step 1: find that node
  // step 2: deleteNode
  // instead of delete change value and always delete the case 1
  // 2 case 
  // if no child then just remove it
  // instead of delete change value and always delete the case 1
  // case 2 :
  // swap it with its inorder successor(minimum(leftmost) from right subtree) || predecessor(maximum(rightmost) from left subtree)
  // recursivly swap till boot
  
    TreeNode* deleteNode(TreeNode* root, int key) {
      if(root==NULL) return root; // base case
                                  
      // find by binary search
      if(key>root->val){
        root->right=deleteNode(root->right, key);
      }else if(key<root->val){
        root->left=deleteNode(root->left, key); // updated tree
      }else{ // found 
        if(root->left==NULL){ // no left the right is to be attached
          return root->right;
        }else if(root->right==NULL){
          return root->left;
        }

        // find minimum from right subtree
        TreeNode* min=root->right;
        while(min->left!=NULL){
          min=min->left;
        }
        root->val=min->val;
        root->right=deleteNode(root->right,root->val);
      }
      return root;
    }
};
