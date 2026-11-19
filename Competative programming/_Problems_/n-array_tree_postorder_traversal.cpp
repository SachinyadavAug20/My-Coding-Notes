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

class Node {
public:
  int val;
  vector<Node *> children;

  Node() {}

  Node(int _val) { val = _val; }

  Node(int _val, vector<Node *> _children) {
    val = _val;
    children = _children;
  }
};

class Solution {
private:
  void traverse(Node *root, vector<int> &result) {
    if (!root)
      return;
    for (Node *child : root->children) {
      traverse(child, result);
    }
    result.push_back(root->val);
  }

public:
  vector<int> postorder(Node *root) {
    vector<int> result;
    traverse(root, result);
    return result;
  }
};
