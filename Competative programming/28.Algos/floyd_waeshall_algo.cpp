#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N=510,INF=1e9+10;
int dist[N][N];

int main(int argn, char *argv[]) {
  for(int i=0;i<N;i++){
      for (int j=0; j<N; j++) {
          if(i==j) dist[i][j]=0; // for k=0 calculated
          else dist[i][j]=INF;
      }
  }
  int n,m;
  cin>>n>>m;
  for(int i=0;i<m;i++){
      int v1,v2,w;
      cin>>v1>>v2>>w;
      dist[v1][v2]=w;  // distance btw v1 to v2 via no other is w
  }
  // for k level for k=0 cancluated already
  for(int k=1;k<=n;++k){
  for(int i=1;i<=n;i++){
      for (int j=1; j<=n; j++) {
          if(dist[i][k]!=INF && dist[k][j]!=INF)
          dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
      }
  }
  } // O(N^3) 
  for(int i=1;i<=n;i++){
      for (int j=1; j<=n; j++) {
        if(dist[i][j]==INF){
          cout<<"I ";
        }else{
          cout<<(dist[i][j])<<" ";
        }
        
      }
      cout<<endl;
  }

  return 0;
}
