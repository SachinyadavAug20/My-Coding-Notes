#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
  // valid tree -> has no cycle and all nodes are connected

  unordered_set<int> vist;
  int cycle=0;
  void dfs(int node, vector<vector<int>> &adj,int parent=-1) {
    if(vist.find(node)!=vist.end()){
      cycle=1;
      return;
    }
    vist.insert(node);
    for (int c : adj[node]) {
      if(parent!=c) dfs(c, adj,node);
    }
  }

  bool validTree(int n, vector<vector<int>> &edges) {
    if(edges.size()!=n-1) return false; // basic
    vector<vector<int>> adj(n);
    for (auto v : edges) {
      adj[v[0]].push_back(v[1]);
      adj[v[1]].push_back(v[0]);
    }
    vist.clear();
    cycle=0;
    dfs(0, adj);
    if(cycle) return false;
    for(int i=0; i<n; i++){
      if(vist.find(i)==vist.end()) return false;
    }
    return true;
  }
};
