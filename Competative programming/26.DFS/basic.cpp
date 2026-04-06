#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N =1e5+10;
vector<int> graph[N];
void printAdjList(int n){
     for (int  i = 0; i < n+1; i++) {
        for (auto pr:graph[i]) {
            cout<<pr<<' ';
        }
        cout<<endl;
     }
}

bool visited[N];
void dfs(int vertices){
    // section 1 : take action on vectex after entering the vertex
    // if(visited[vertices]) return; can be done here, instead of in section 2
    cout<<" "<<vertices<<" > "<<endl;
    visited[vertices]=true;
    for (int child : graph[vertices]) {
        cout<<"     "<<" child "<<child<<endl;
        // section 2 : take action on child before entering child node
        if (visited[child]) continue;  
        dfs(child);
        // section 3 : take action on child after exiting child node
    }
    // section 4 : take action on vertex before exiting the vertex
} // complexity O( V + E )

int main(int argn, char *argv[]) {
    int n,m;
    cin>>n>>m;
    for (int i=0; i<m; i++) {
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    printAdjList(n);
    dfs(1);
    return 0;
}

