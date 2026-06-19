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
  // root can always be part of the diameter
  // can do right most from root and then, left most from root
  // add it 
  // BUT, diameter may not pass through the root
  //
  // Solution
  // take diameter from where there is atleast left and right
  // maintain ans -> max 

  int ans=0;
  int dfs(TreeNode* n){
    if(n==NULL) return 0;
    int left=dfs(n->left);
    int right=dfs(n->right);
    ans=max(ans,left+right);
    return 1+max(left,right);
  }

  vector<int> height;
  int diameterOfBinaryTree(TreeNode *root) {
    ans=0;
    dfs(root);
    return ans;
  } // 100% time
};
