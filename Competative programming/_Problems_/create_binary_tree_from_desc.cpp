#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr))
#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};
// Use a hash map to instantiate and link each parent to its child based on the direction, while tracking every child node in a set. The overall tree root is simply the parent node that was never marked as a child.
class Solution {
public:
  TreeNode *createBinaryTree(vector<vector<int>> &descriptions) {
    unordered_map<int, TreeNode *> nodeMap;
    unordered_set<int> children;
    for (const auto &desc : descriptions) {
      int parentVal = desc[0];
      int childVal = desc[1];
      bool isLeft = desc[2];
      if (nodeMap.find(parentVal) == nodeMap.end()) {
        nodeMap[parentVal] = new TreeNode(parentVal);
      }
      if (nodeMap.find(childVal) == nodeMap.end()) {
        nodeMap[childVal] = new TreeNode(childVal);
      }
      if (isLeft) {
        nodeMap[parentVal]->left = nodeMap[childVal];
      } else {
        nodeMap[parentVal]->right = nodeMap[childVal];
      }
      children.insert(childVal);
    }

    for (const auto &desc : descriptions) {
      int parentVal = desc[0];
      if (children.find(parentVal) == children.end()) {
        return nodeMap[parentVal];
      }
    }

    return nullptr;
  }
};
