#include <bits/stdc++.h>
using namespace std;
#define ll long long


const int N=1e3+10;
int graph[N][N];

void printMatrix(int n){
     for (int  i = 0; i < n+1; i++) {
        for (int j = 0; j < n+1; j++) {
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
        // undirected graph
        graph[v2][v1]=1;
        graph[v1][v2]=1;
     } // space complexity O(n^2) ==> big problem
     printMatrix(n);
    return 0;
}
