#include <bits/stdc++.h>
#include <stack>
#include <unordered_map>
#include <variant>
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

class SolutionRec {
public:
  // as remove node new lefnodes get created
  // can do DFS => postorder
  // as see left and right edges then ask if root becomes leaf or not
  // how to delete it
  // return root if not deleted

  TreeNode *dfs(TreeNode *root, int target) {
    if (!root)
      return NULL;
    root->left = dfs(root->left, target);
    root->right = dfs(root->right, target);
    bool isLeaf = (!root->left && !root->right);
    if (isLeaf && root->val == target) {
      return NULL;
    }
    return root;
  }
  TreeNode *removeLeafNodes(TreeNode *root, int target) {
    root = dfs(root, target);
    return root;
  }
};
class Solution {
public:
  // iterative approach
  // use stack

  TreeNode *removeLeafNodes(TreeNode *root, int target) {
    unordered_map<TreeNode *, bool> vist;
    unordered_map<TreeNode *, TreeNode *> parent;
    parent[root] = NULL;
    stack<TreeNode *> st;
    TreeNode *temp = root;
    st.push(temp);
    while (!st.empty()) {
      TreeNode *node = st.top();
      st.pop();
      if (!node->left && !node->right) {
        if (node->val == target) {
          // deleted
          TreeNode *par = parent[node];
          if (!par)
            return NULL; // as only root has no parent
          // if left child
          if (par->left == node) {
            par->left = NULL;
          } else {
            par->right = NULL;
          }
        }
      } else if(!vist[node]) {
        vist[node] = true;
        st.push(node);
        if(node->left){
          st.push(node->left);
          parent[node->left]=node;
        }
        if (node->right) {
          st.push(node->right);
          parent[node->right] = node;
        }
      }
    }

    return root;
  }
};
