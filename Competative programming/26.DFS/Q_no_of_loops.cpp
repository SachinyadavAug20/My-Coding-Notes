#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N=3e5+10;
vector<int> graph[N];
vector<bool> visited(N,0);

    int backed_vertex=0;
void dfs(int vertex,int parent){
    visited[vertex]=true;
    bool isLoopExits=false;
    for(int child:graph[vertex]){
        if(parent==child && visited[child]) continue;  // here, visited check is redundant(as if it is parent then it is visited by default)
        if(visited[child]) {
          backed_vertex++;
          continue;
        }  
        // OR of all childern for vertex who say loop exist
        dfs(child,vertex);
    }
}

int main(int argn, char *argv[]) {
    // loop has minimum 3 nodes if end up at visited node which is not direct parent is a loop
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < m; i++) {
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2); // undirected map
        graph[v2].push_back(v1);
    }

    for (int i = 1; i <= n; i++) {
        if (visited[i]) continue;
        dfs(i,0);
    }
    cout<<"No of loops : "<<backed_vertex/2<<endl; // as undirected graph so half 
    return 0;
}
