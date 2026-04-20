#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e5+10;
vector<int> tree[N];
vector<int> parent(N); // each node has only 1 parent
void dfs(int v,int par=-1){
        parent[v]=par;
    for(int child:tree[v]){
        if(child==par) continue;
        dfs(child,v);
    }
}
vector<int> path(int v){
    vector<int> path;
    while(v!=-1){
        path.push_back(v);
        v=parent[v];
    }
    reverse(path.begin(),path.end());
    return path;
}

int main(int argn, char *argv[]) {
    int n;
    cin>>n;
    for (int i = 0; i < n-1; i++) {
        int v1,v2;
        cin>>v1>>v2;
        tree[v1].push_back(v2);
        tree[v2].push_back(v1);
    }
    dfs(1);
    // for(int i=1;i<n+1;i++){
    //     cout<<parent[i]<<endl;
    // }
    
    // LCA
    int v1,v2;
    cin>>v1>>v2;
    vector<int> path1=path(v1),path2=path(v2);

    int LCA=1;
    for(int i=0;i<min(path1.size(),path2.size());i++){
        if(path1[i]==path2[i]){
            LCA=path1[i];
        }else{
            break;
        }
    }
    cout<<LCA<<endl;  // O(V+E) == O(N)

  return 0;
}
