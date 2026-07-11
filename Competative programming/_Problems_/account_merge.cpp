#include <algorithm>
#include <bits/stdc++.h>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
#define ll long long

class DisJointSet {
  vector<int> parent;
  vector<int> sz;

public:
  DisJointSet(int n) {
    parent.resize(n);
    for (int i = 0; i < n; i++)
      parent[i] = i;
    sz.assign(n, 1);
  }
  int find(int v) {
    if (v == parent[v])
      return v;
    return parent[v] = find(parent[v]); // path compression
  }
  void Union(int a, int b) {
    // join root
    a = find(a);  // root 1
    b = find(b);  // root 1
    if (a != b) { // if not in same tree
      if (sz[a] < sz[b])
        swap(a, b); // union by sz
      // a is bigger than b
      parent[b] = a;
      sz[a] += sz[b];
    }
  }
};

class Solution {
public:
  // plan
  // need to check when have same name
  // DFS is easy solution(union set will be lengthly)
  // connect all connect -> answer will be no of connect component
  // this is a union find problem
  // map email to index of accounts
  //

  vector<vector<string>> accountsMerge(vector<vector<string>> &accounts) {
    int n = accounts.size();
    DisJointSet ds = DisJointSet(n);
    unordered_map<string, int> emailToIndex;
    for (int i = 0; i < n; i++) {
      auto &acc = accounts[i];
      for (int j = 1; j < acc.size(); j++) {
        string email = acc[j];
        if (emailToIndex.find(email) == emailToIndex.end()) {
          emailToIndex[email] = i;
        } else {
          // i and emailToIndex[email] should be union
          ds.Union(i, emailToIndex[email]);
        }
      }
    }
    // map name to all emails
    unordered_map<int, vector<string>> emailGroup;
    for (auto &p : emailToIndex) {
      int i = p.second;
      string e = p.first;
      int leader = ds.find(i);
      emailGroup[leader].push_back(e);
    }

    vector<vector<string>> ans;

    for (auto &p:emailGroup) {
      int i=p.first;
      vector<string> a;
      a.push_back(accounts[i][0]);
      sort(emailGroup[i].begin(), emailGroup[i].end());
      for (auto &e : emailGroup[i])
        a.push_back(e);
      ans.push_back(a);
    }
    return ans;
  }
};
