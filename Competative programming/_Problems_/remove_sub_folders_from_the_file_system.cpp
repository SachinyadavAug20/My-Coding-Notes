#include <bits/stdc++.h>
using namespace std;


struct Node {
  unordered_map<string, Node *> nexts;
  bool isEnd = false;
};

class Solution {
public:
  vector<string> removeSubfolders(vector<string> &folder) {
    sort(folder.begin(), folder.end());
    Node *root = new Node();
    vector<string> ans;
    for (const string &s : folder) {
      Node *curr = root;
      string temp = "";
      bool isSubfolder = false;
      for (int i = 1; i <= s.size(); i++) {
        if (i == s.size() || s[i] == '/') {
          if (!curr->nexts.count(temp)) {
            curr->nexts[temp] = new Node();
          }
          curr = curr->nexts[temp];
          if (curr->isEnd) {
            isSubfolder = true;
            break;
          }
          temp = "";
        } else {
          temp += s[i];
        }
      }

      if (!isSubfolder) {
        curr->isEnd = true;
        ans.push_back(s);
      }
    }
    return ans;
  }
};
