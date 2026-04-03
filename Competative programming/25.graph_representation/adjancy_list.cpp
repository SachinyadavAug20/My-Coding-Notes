#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N =1e6+10;
vector<int> graph[N];
void printAdjList(int n){
     for (int  i = 0; i < n+1; i++) {
         cout<<i<<" > ";
        for (int j = 0; j < graph[i].size(); j++) {
            cout<<graph[i][j]<<' ';
        }
        cout<<endl;
     }
}

int main(int argn, char *argv[]) {
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < m; i++) {
        int v1,v2;
        cin>>v1>>v2;
        // undirected
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    } // space O(N+M)  => good provided number of edges is less than 10^6
    printAdjList(n);
    return 0;
}
