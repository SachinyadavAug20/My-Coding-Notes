#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long

class Solution {
public:
  // can do decision tree for each step choose any number base on reaching target ===> can get dupicates permutation(need combination).
  // 
  // make vector of indclude or not that => controlled adding of dupicates
  //
  vector<vector<int>> ans;
  int tar;
  vector<int> can;
  void dfs(int i, vector<int> &path, int total) {
    if(total==tar){
      // make copy
      ans.push_back(path);
      return;
    }
    if(total>tar) return;
    if(i>=can.size()) return;

    // include
    path.push_back(can[i]);
    dfs(i,path,total+can[i]);
    // not include
    path.pop_back();
    dfs(i+1,path,total);
  }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      ans.clear();
      tar=target;
      vector<int> p={};
      can=candidates;
      dfs(0, p, 0);
      return ans;
    }// O(2^(target)) = O(2^(40))
};
