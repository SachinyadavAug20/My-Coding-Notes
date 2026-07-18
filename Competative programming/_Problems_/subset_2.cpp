#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long

class Solution {
public:
  // as nums can have duplicates can't do simple 2^n possible
  set<vector<int>> ans;
  int n;
  void dfs(vector<int>&nums, int i, vector<int>&cur){
    if(i>=n){
      vector<int> temp=cur;
      sort(temp.begin(), temp.end());
      ans.insert(temp);
      return;
    }
    cur.push_back(nums[i]);
    dfs(nums, i+1, cur);
    cur.pop_back();
    dfs(nums, i+1, cur);
  }
  vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    this->n=nums.size();
    ans.clear();
    vector<int> p;
    dfs(nums, 0, p);
    vector<vector<int>> ans1;
    for(auto v:ans)ans1.push_back(v);
    return ans1;
  } // O(2^n × n log n)
};
