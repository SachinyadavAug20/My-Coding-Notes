#include <bits/stdc++.h>
#include <utility>
#include <vector>
using namespace std;
#define ll long long

class Solution {
public:
  // plan
  // for each position have nums.size() possible the n-1
  // n*(n-1).. => n! permutation of it.
  // give, n<=6 thus 6! = 720
  //
  // different recursion
  // give all permutation with n number -> n-1 number ->.. 1
  // for 1 only permutation is itself
  // rest take nums[i] and put it in every place
  //
  int n;
  vector<vector<int>> dfs(vector<int>&nums,int i) {
    if(i==(n-1)) return {{nums[i]}};
    vector<vector<int>> a=dfs(nums, i+1);
    vector<vector<int>> v;
    for(int j=0;j<a.size();j++){
      vector<int> b=a[j];
      b.push_back(nums[i]);
      v.push_back(b);
      for(int k=b.size()-2;k>=0;k--){
        swap(b[k],b[k+1]);
        v.push_back(b);
      }
    }
    return v;
  }
  vector<vector<int>> permute(vector<int>& nums) {
    this->n=nums.size();
    return dfs(nums, 0);
  }
};
