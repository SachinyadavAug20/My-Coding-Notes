#include <bits/stdc++.h>
#include <deque>
#include <vector>
using namespace std;
#define ll long long

class Solution {
public:
  // brute force: do dfs for each node and check height
  // 2 solution-> 
  // start with leaves
  // and try to go to middle
  // there will be atmost 2 root which will minimize height
  //
  // algo 
  // start at a any node n1 => longest path from it to node n2
  // n2 for sure -> will be include in longest path
  // find longest path globaly using n2 -> n3(say)
  // middle of this longest path is root 
  // => atmost have 2 middle nodes(logical converge at center)
  //

  vector<vector<int>> mp;
  void dfs(int node,int par=-1){
    if(node==par) return;
    for(auto c:mp[node]){
      dfs(c,node);
    }
  }
  vector<int> findMinHeightTrees(int n, vector<vector<int>> &edges) {
    if(n==1) return {0};
    mp.resize(n);
    for(int i=0;i<n-1;i++){
      mp[edges[i][0]].push_back(edges[i][1]);
      mp[edges[i][1]].push_back(edges[i][0]);
    }
    deque<int> leaves;
    vector<int> edges_ctn(n);
    for(int i=0;i<n;i++){
      if(mp[i].size()==1){
        leaves.push_back(i);
      }
      edges_ctn[i]=mp[i].size();
    }
    while (!leaves.empty()) {
      if(n<=2){
        vector<int> ans(leaves.begin(),leaves.end());
        return ans;
      }
      int c=leaves.size();
      while (c--) {
         int node=leaves.front();
         leaves.pop_front();
         n--;
         for(int nei:mp[node]){
           edges_ctn[nei]--;
           if(edges_ctn[nei]==1){
             leaves.push_back(nei);
           }
         }
      }
    }
    return {-1,-1};
  }
};
