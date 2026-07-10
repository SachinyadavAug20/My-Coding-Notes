#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long

const int N = 1e5 + 10;
class Solution {
public:
  // remove a edge from graph to make a tree
  // Graph theory ->
  // there are many correct ans(not all)
  // detect a cycle and break it
  // gurranted cycle get all edges of the cycle
  // use disjoint set => use union find
  //
  // given graph will have n edges for tree need to have n-1 edges
  // add all node in disjoint set => can use find(can tell)
  // can tell using find does not belong to separate component
  //
  vector<int> parent;
  void make(int v) { parent[v] = v; }
  int find(int v) {
    if (v == parent[v]) return v;
    return find(parent[v]);
  }
  void Union(int a, int b) {
    // join root
    a = find(a);  // root 1
    b = find(b);  // root 1
    if (a != b) { // if not in same tree
      parent[b] = a;
    }
  }
  vector<int> findRedundantConnection(vector<vector<int>> &edges) {
    int n=edges.size();// by property
    parent.assign(n+1,0);
    for(int i=1;i<=n;i++) make(i);
    for(auto v:edges){
      int v1=v[0];
      int v2=v[1];
      if(find(v2)==find(v1))return v;
      Union(v1, v2);
    }

    return {-1,-1};
  }
};
