#include <bits/stdc++.h>
using namespace std;
#define ll long long

class SolutionTLE {
  // candidates can have duplicates not allowed => 
  // thus, will get dupicates due to dupicates in candidates array
  //
public:
  set<vector<int>> ans;
  vector<int> can;
  int tar;
  void dfs(int i, int sum,vector<int> &cur){
    if(tar==sum){
      // need temp as will pop_back in backtracking and if sorted same then, will end up poping the element which is not intended(Invariance)
      vector<int> temp = cur;
      sort(temp.begin(), temp.end());
      ans.insert(temp);
      return;
    }
    if(i>=can.size() || tar<sum) return;
    cur.push_back(can[i]);
    dfs(i+1, sum+can[i], cur);
    cur.pop_back();
    dfs(i+1, sum, cur);
  }
  vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    ans.clear();
    can=candidates;
    tar=target;
    vector<int> p;
    dfs(0, 0, p);
    vector<vector<int>> ans1;
    for(auto v:ans) ans1.push_back(v);
    return ans1;
  }// TLE 
};

class Solution {
public:
  // need to effectively eleminiate dupicates using 3sum method
  // plan
  // sort the input array => make duplicates adjustant
  // make choose element or not 
  //
  
  vector<vector<int>> ans;
  int tar;
  void dfs(vector<int>& can,int i,int sum,vector<int> &cur){
    if(sum==tar){
      ans.push_back(cur);
      return;
    }
    if(i>=can.size() || tar<sum) return;
    cur.push_back(can[i]);
    dfs(can,i+1,sum+can[i],cur);
    cur.pop_back();
    while(i+1<can.size() && can[i]==can[i+1]) i++;
    dfs(can, i+1, sum, cur);
  }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
      ans.clear();
      sort(candidates.begin(), candidates.end());
      tar=target;
      vector<int>p;
      dfs(candidates, 0, 0, p);
      return ans;
    }
};
