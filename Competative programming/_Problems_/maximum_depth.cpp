#include <algorithm>
#include <bits/stdc++.h>
#include <deque>
#include <stack>
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
class Solution1 {
public:
  void dfs(TreeNode* n){
    if(n==NULL) return;

    depth[n->left]=depth[n]+1;
    dfs(n->left);
    depth[n->right]=depth[n]+1;
    dfs(n->right);
  }
  unordered_map<TreeNode*, int> depth;
  int maxDepth(TreeNode *root) {
    // need to do a dfs
    if(root==NULL) return 0;
    depth.clear();
    depth[root]=1;
    dfs(root);
    int ans=0;
    for(auto p:depth){
      if(p.first){ // took time to debug
        ans=max(ans,p.second);
      }
    }
    return ans;
  } // 1.2% time and 13% space beats
  // bad as takes time and space -> to calculate unnessary data
};


class Solutiondfs {
  // can do dfs or bfs
public:
  int ans=0;
  int maxDepth(TreeNode *root) {
    if(root==NULL) return 0;
    return 1+max(maxDepth(root->left),maxDepth(root->right));
  }// 100% time and 77% space
};



class SolutionBfS {
// iterative bfs
// level order traversal
// use queue to store level wise nodes

public:
  int maxDepth(TreeNode *root) {
    if(root==NULL) return 0;
    int level=0;
    deque<TreeNode*> dq;
    dq.push_back(root);
    while (!dq.empty()) {
      int n=dq.size();
      for(int i=0;i<n;i++){
        TreeNode* nn=dq.front();
        dq.pop_front();
        if(nn->left){
          dq.push_back(nn->left);
        }
        if(nn->right){
          dq.push_back(nn->right);
        }
      }
      level++;
    }
    return level;
  }
};
class Solution {
// dfs iterative
public:
  int maxDepth(TreeNode *root) {
    if(root==NULL) return 0;
    stack<pair<TreeNode*,int>> st; // node:level
    st.push({root,1});
    int ans=1;
    while (!st.empty()) {
       TreeNode* node=st.top().first;
       int depth=st.top().second;
       st.pop();
       if(node){ // ignore null
         ans=max(ans,depth);
         st.push({node->left,depth+1}); // put null
         st.push({node->right,depth+1});
       }
    }
    return ans;
  }
};
