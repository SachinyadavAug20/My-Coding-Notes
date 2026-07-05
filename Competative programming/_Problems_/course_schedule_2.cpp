#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#include <vector>
using namespace std;
#define ll long long

class Solution {
public:
  // need to do a topological sort
  // of this graph
  // course has 3 state
  // visited, unvisited, visiting(to check cycle)
  //
  unordered_map<int, vector<int>> mp;
  vector<int> ans;
  unordered_set<int> vist;
  unordered_set<int> cycle;
  bool dfs(int cur, unordered_set<int> &c) {
    if (c.find(cur) != c.end())
      return false;
    if (vist.find(cur) != vist.end())
      return true;
    c.insert(cur);
    for (auto v : mp[cur]) {
      if (dfs(v, c) == 0) {
        return false;
      }
    }
    c.erase(cur);
    vist.insert(cur);
    ans.push_back(cur);
    return true;
  }
  vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites) {
    ans.clear();
    for (auto v : prerequisites) {
      mp[v[0]].push_back(v[1]);
    }
    for (int i = 0; i < numCourses; i++) {
      cycle.clear();
      if(!dfs(i, cycle)){
        return {};
      }
    }
    return ans;
  } // O(n+k)
};
