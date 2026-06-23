#include <bits/stdc++.h>
#include <memory>
#include <numeric>
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
  // ideas
  // need to make it recursive => as it is possible
  // every value will be unique
  // 1st value in preorder is root
  // find the root in inorder and make left and right subtree to know where to
  // partitions using O(n^2) take left and right subtree and again do this
  // process

  TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
    if (preorder.empty() || inorder.empty())
      return NULL;
    TreeNode *root = new TreeNode(preorder[0]); // root
    int i = find(inorder.begin(), inorder.end(), preorder[0]) -
            inorder.begin(); // find root in inorder

    vector<int> newInorderL(inorder.begin(), inorder.begin() + i);
    vector<int> newPreorderL(preorder.begin() + 1, preorder.begin() + i + 1);

    root->left=buildTree(newPreorderL,newInorderL);
    vector<int> newInorderR(inorder.begin() + i + 1, inorder.end());
    vector<int> newPreorderR(preorder.begin() + i + 1, preorder.end());
    root->right=buildTree(newPreorderR, newInorderR);
    return root;
  }
};
