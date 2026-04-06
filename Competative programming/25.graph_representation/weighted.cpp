#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N =1e6+10;
vector<pair<int,int>> graph1[N];
void printAdjList(int n){
     for (int  i = 0; i < n+1; i++) {
         cout<<i<<" > ";
        for (auto pr:graph1[i]) {
            cout<<'('<<pr.first<<','<<pr.second<<')'<<' ';
        }
        cout<<endl;
     }
}

const int N1=1e3+10;
int graph2[N1][N1];

void printMatrix(int n){
     for (int  i = 0; i < n+1; i++) {
        for (int j = 0; j < n+1; j++) {
            cout<<graph2[i][j]<<' ';
        }
        cout<<endl;
     }
}
int main(int argn, char *argv[]) {
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < m; i++) {
        int v1,v2,w;
        cin>>v1>>v2>>w;
        // undirected
        graph2[v2][v1]=w;
        graph2[v1][v2]=w;

        graph1[v1].push_back({v2,w});
        graph1[v2].push_back({v1,w});
    } 
    printMatrix(n);
    cout<<endl;
    printAdjList(n);

    // i, j connected ?? and weight =>O(1) in matrix approach
    int i,j;
    cin>>i>>j;
    if (graph2[i][j]) {
        cout<< graph2[i][j]<<endl;
    }

    // i, j connected ?? and weight =>O(n) in list approach
    for(auto cc:graph1[i]){
        if (cc.first==j) {
            cout<<cc.second<<endl;
        }
    }

    return 0;
}


