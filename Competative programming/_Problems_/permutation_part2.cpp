#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;
#define ll long long

class Solution {
public:
  // might have duplicates
  // it is not regular permutation as may have duplicates
  // different recursion => 
  // make hash map -> number : count
  // group the number and make choose on group not individual element
  // 
  //
  vector<vector<int>> ans;
  unordered_map<int, int> hsh; // value : count
  int n;
  void dfs(vector<int> &v) {
      if(v.size()==n){
          ans.push_back(v);
          return;
      }
      for(auto n:hsh){
          if(n.second>0){
              v.push_back(n.first);
              hsh[n.first]--;
              dfs(v);
              hsh[n.first]++;
              v.pop_back();
          }
      }
  }
  vector<vector<int>> permuteUnique(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    ans.clear();
    this->n=nums.size();
    for(int i:nums) hsh[i]++;
    vector<int> p;
    dfs(p);
    return ans;
  }
};
