#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
#define ll long long

class SolutionBruteForced {
public:
  unordered_map<int, vector<int>> adj; // prerequisites:courses  (opposite)
  bool dfs(int u, int v) {
    if (u == v)
      return true;
    bool ans = 0;
    for (auto k : adj[u]) {
      ans |= dfs(k, v);
    }
    return ans;
  }
  vector<bool> checkIfPrerequisite(int numCourses,
                                   vector<vector<int>> &prerequisites,
                                   vector<vector<int>> &queries) {
    adj.clear();
    for (auto v : prerequisites)
      adj[v[0]].push_back(v[1]);
    int n = queries.size();
    vector<bool> ans(n);
    for (int i = 0; i < n; i++) {
      int u = queries[i][0], v = queries[i][1];
      ans[i] = dfs(u, v);
    }
    return ans;
  }
};

class Solution {
public:
  unordered_map<int, vector<int>> adj;
  unordered_set<int> coursesToPrereq[105];
  bool computed[105];

  void dfs(int v) {
    if (computed[v])
      return;
    for (int prereq : adj[v]) {
      dfs(prereq);
      // Direct
      coursesToPrereq[v].insert(prereq);
      // indirect
      coursesToPrereq[v].insert(coursesToPrereq[prereq].begin(), coursesToPrereq[prereq].end());
    }
    computed[v] = true;
  }

  vector<bool> checkIfPrerequisite(int numCourses, vector<vector<int>> &prerequisites, vector<vector<int>> &queries) {
    // reset
    adj.clear();
    for (int i = 0; i < numCourses; i++) {
      coursesToPrereq[i].clear();
      computed[i] = false;
    }

    // map
    for (auto &e : prerequisites)
      adj[e[1]].push_back(e[0]);

    // dfs
    for (int i = 0; i < numCourses; i++)
      dfs(i);

    // ans
    vector<bool> ans;
    for (auto &q : queries)
      ans.push_back(coursesToPrereq[q[1]].count(q[0]));
    return ans;
  }
};
