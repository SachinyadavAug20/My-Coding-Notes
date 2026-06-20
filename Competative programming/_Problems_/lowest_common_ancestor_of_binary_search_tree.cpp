#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;
#define ll long long
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
  // LCA to find as GCA is always root
  // plane keep track of parent of each node
  // then will be able to find path from root to a node
  // in a path from p -> root and q -> root => 1st common node is LCA
  //
  unordered_map<TreeNode *, TreeNode *> par;
  void dfs(TreeNode* n,TreeNode*p){
    if(n==NULL) return;
    par[n]=p;
    dfs(n->left,n);
    dfs(n->right,n);
  }
  vector<TreeNode*> path(TreeNode*n,TreeNode*root){
    vector<TreeNode*> p;
    while (n!=root) {
      p.push_back(n);
      n=par[n];
    }
    reverse(p.begin(),p.end());
    return p;
  }
  TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    dfs(root->left, root);
    dfs(root->right, root);
    vector<TreeNode*> pp=path(p, root);
    vector<TreeNode*> pq=path(q, root);
    int n=min(pq.size(),pp.size());
    TreeNode* LCA=root;
    for(int i=0;i<n;i++){
      if(pq[i]==pp[i]){
        LCA=pp[i];
      };
    }
    return LCA;
  }
};
