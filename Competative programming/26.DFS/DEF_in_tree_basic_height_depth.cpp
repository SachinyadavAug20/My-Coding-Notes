#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printprimefactors(vector<pair<int, int>> a);
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a);
void printVectSS(vector<pair<pair<int, int>, int>> a);

void printImage(vector<vector<int>> a) {
  for (auto v : a) {
    for (int n : v) {
      cout << n << " ";
    }
    cout << endl;
  }
}

const int N = 1e5;
vector<vector<int>> tree(N);
vector<int> height(N,0),depth(N,0);  // as node are 1 indexed so i+1

void dfs(int node, int parent=0) {
  // before entering node
  for (int child : tree[node]) {
    // before entering node's child
    if (parent == child) continue;
    depth[child]=depth[node]+1;
    dfs(child, node);
    height[node]=max(height[node],height[child]+1);
    // after exiting node's child
  }
  cout << endl;
  // after exiting node
}

int main(int argn, char *argv[]) {
  // Tree :not use visited array as no loop pas parent
  int n;
  cin >> n;
  for (int i = 0; i < n+1; i++) {
    int n1, n2;
    cin >> n1 >> n2;
    // consider undirected
    tree[n1].push_back(n2);
    tree[n2].push_back(n1);
  }
  // printImage(tree);
  height[1]=0;
  dfs(1);
  for (int i=1; i<14; i++) {
      cout<<i<<" > "<<height[i]<<"  "<<depth[i]<<endl;
  
  }
  return 0;
}
