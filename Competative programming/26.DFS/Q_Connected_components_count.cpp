// Given n, i.e. total number of nodes in an undirected graph numbered from 1 to n and an integer e, i.e. total number of edges in the graph. Calculate the total number of connected components in the graph. A connected component is a set of vertices in a graph that are linked to each other by paths.
//
// Input Format:
//
// First line of input line contains two integers n and e. Next e line will contain two integers u and v meaning that node u and node v are connected to each other in undirected fashion. 
//
// Output Format:
//
// For each input graph print an integer x denoting total number of connected components.
//
// Constraints:
//
// All the input values are well with in the integer range.


#include <bits/stdc++.h>
using namespace std;
#define ll long long


const int N =1e5+10;
vector<int> graph[N];
bool visited[N];
vector<vector<int>> cc; // store connected component
vector<int> currentcc;

void dfs(int vertices){
    currentcc.push_back(vertices);
    visited[vertices]=true;
    for (int child : graph[vertices]) {
        if (visited[child]) continue;
        dfs(child);
    }
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

    for (int i = 1; i < n+1; i++) {
        if (visited[i]) {
            continue;
        }
        currentcc.clear();
        dfs(i);
        cc.push_back(currentcc);
    }
    cout<<"no_of_connected_componenets : "<<cc.size()<<endl;
    // print connected component
    cout<<"connected components: \n";
    for(auto aa:cc){
        for(int bb:aa){
            cout<<bb<<" ";
        }
        cout<<endl;
    }
    return 0;
}

