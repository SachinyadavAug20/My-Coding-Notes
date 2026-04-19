#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e5+10;
vector<int> tree[N];
int depth[N];

void dfs(int v,int par=-1){
    for(int child:tree[v]){
        if(child==par) continue;
        depth[child]=depth[v]+1;
        dfs(child,v);
    }
    
}

int main(int argn, char *argv[]) {
    int n;
    cin>>n;
    for (int  i = 0; i < n-1; i++) {
        int v1,v2;
        cin>>v1>>v2;
        tree[v1].push_back(v2);
        tree[v2].push_back(v1);
    }
    dfs(1);
    // find max depth node
    int max_dept=-1,max_v;
    for(int i=1;i<n+1;i++){
        // cout<<depth[i]<<endl;
        if(max_dept<depth[i]){
            max_dept=depth[i];
            max_v=i;
        }
        // reset depth array
        depth[i]=0;
    }
    // max depth node is 1 end of the width ==> apply dfs on it and find max_dept it is the wdth of tree

    dfs(max_v);
    for(int i=1;i<n+1;i++){
        if(max_dept<depth[i]){
            max_dept=depth[i];
            max_v=i;
        }
    }
    cout<<"Width of tree : "<<max_dept;

  return 0;
}
