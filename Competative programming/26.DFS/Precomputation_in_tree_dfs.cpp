#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e5+10;
vector<vector<int>> graph(N);
int subtreeSum[N];
int noOFEvenNumberInSubtree[N];

void dfs(int vexter,int par=0){
    subtreeSum[vexter]=vexter;
    if (vexter%2==0) noOFEvenNumberInSubtree[vexter]++;
    
    for(auto child : graph[vexter]) {
        if(child==par) continue;
        dfs(child,vexter);
        subtreeSum[vexter]+=subtreeSum[child];
        noOFEvenNumberInSubtree[vexter]+=noOFEvenNumberInSubtree[child];
    }
}

int main(int argn, char *argv[]) {
  int n;
  cin>>n;
  for (int i = 0; i < n-1; i++) {
    int v1,v2;
    cin>>v1>>v2;
    graph[v1].push_back(v2);
    graph[v2].push_back(v1);
  }
  int q;
  cin>>q;
  dfs(1); // only 1 dfs does all work
  while (q--) {
    int x;
    cin>>x;
    cout<<subtreeSum[x]<<" "<<noOFEvenNumberInSubtree[x]<<endl;
  }
  return 0;
}
