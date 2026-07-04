#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;
#define ll long long
#define for0(i, n) for (int i = 0; i < n; i++)

class Solution {
public:
  // possible
  // cycle can be problem 0->1 and 1->0
  // if map -> any from course -> prerequisites (will cycle)
  // if leads to empty -> then possible
  //
  unordered_map<int, vector<int>> prereq;
  bool dfs(int curr, vector<bool> &v) {
    if(v[curr]) return false;
    if(prereq[curr].empty()) return true;
    v[curr]=true;
    for (int c : prereq[curr]) {
      if(dfs(c, v)==0) return false;
    }
    prereq[curr]={};
    v[curr]=0;
    return true;
  }
  bool canFinish(int numCourses, vector<vector<int>> &prerequisites) {
    prereq.clear();
    for (auto v : prerequisites) {
      prereq[v[0]].push_back(v[1]); // course->prereqs
    }
    for (int i = 0; i < numCourses; i++) {
      vector<bool> v(numCourses, false);
      if(dfs(i, v)==0) return false;
    }
    return true;
  }// O(node+prereq) => O(n+v)
};
