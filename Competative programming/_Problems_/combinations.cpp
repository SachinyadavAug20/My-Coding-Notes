#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long

class Solution {
public:
  vector<vector<int>> ans;
  int k;
  int n;
  void dfs(vector<int> &v, int i, int ctn) {
    if(ctn==k){
      ans.push_back(v);
      return;
    }
    if(i>n)return;
    if(k-ctn>n-i+1)return;
    v.push_back(i);
    dfs(v, i+1, ctn+1);
    v.pop_back();
    dfs(v, i+1, ctn);
  }
  vector<vector<int>> combine(int n, int k) {
    ans.clear();
    this->k=k;
    this->n=n;
    vector<int> p;
    dfs(p,1,0);
    return ans;
  }
};
