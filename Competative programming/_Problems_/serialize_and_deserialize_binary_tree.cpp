#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Codec {
public:
  // try to store level order traversal and pass it as string like leetcode

  string serialize(TreeNode *root) {
    queue<TreeNode *> st;
    vector<string> levelorder;
    st.push(root);
    while (!st.empty()) {
      int n = st.size();
      while (n--) {
        TreeNode *top = st.front();
        st.pop();
        if (top == NULL) {
          levelorder.push_back("null");
        } else {
          levelorder.push_back(to_string(top->val));
          st.push(top->left);
          st.push(top->right);
        }
      }
    }
    string ans;
    for (auto x : levelorder) {
      ans += x + " ";
    }
    return ans;
  } // O(n)

  TreeNode *deserialize(string data) {
    vector<string> levelorder;
    stringstream ss(data);
    string word;
    while (ss >> word) { // like cin >> stops after space
      levelorder.push_back(word);
    }
    if (levelorder.size() == 0 || levelorder[0] == "null")
      return NULL;
    queue<TreeNode *> q;
    TreeNode *root = new TreeNode(stoi(levelorder[0]));
    q.push(root);
    int pos = 1, size = levelorder.size();

    // each parent takes 2 nodes
    while (!q.empty() && pos < size) {
      TreeNode *curr = q.front();
      q.pop();
      // for left
      if (pos < size && levelorder[pos] != "null") {
        curr->left = new TreeNode(stoi(levelorder[pos]));
        q.push(curr->left);
      }
      pos++;
      // for right
      if (pos < size && levelorder[pos] != "null") {
        curr->right = new TreeNode(stoi(levelorder[pos]));
        q.push(curr->right);
      }
      pos++;
    }
    return root;
  } // O(n)
};
