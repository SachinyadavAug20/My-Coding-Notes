#include <bits/stdc++.h>
#include <queue>
#include <set>
#include <strings.h>
#include <vector>
using namespace std;
#define ll long long

void printprimefactors(vector<pair<int, int>> a);
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a);
void printVectSS(vector<pair<pair<int, int>, int>> a);

void printImage(vector<vector<int>> a) {
  for (auto v : a) {
    for (int n : v) {
      cout << n << " ";
    }
    cout << endl;
  }
}

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
/*
 3 3
7 7 5
2 4 6
8 2 0
 */

/*
 https://codeforces.com/contest/776/problem/B
 https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/
https://leetcode.com/problems/longest-increasing-path-in-a-matrix/description/
https://leetcode.com/problems/pacific-atlantic-water-flow/description/
https://leetcode.com/problems/island-perimeter/description/
https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1?category=
      https://cp-algorithms.com/graph/depth-first-search.html
    https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1?category=
    https://www.geeksforgeeks.org/explore?page=1&sortBy=submissions&_gl=1*1fcocz3*_up*MQ..*_gs*MQ..
    https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?page=1&sortBy=submissions
https://leetcode.com/problems/number-of-islands/description/
 */

void printVect(vector<unsigned> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << "(" << a[i].first.first << "," << a[i].first.second << ") " << "("
         << a[i].second.first << "," << a[i].second.second << ") " << endl;
  }
}
void printVectSS(vector<pair<pair<int, int>, int>> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << a[i].first.first << " " << a[i].first.second << " > " << a[i].second
         << endl;
  }
}

void printprimefactors(vector<pair<int, int>> a) {
  for (auto pr : a) {
    cout << pr.first << "^" << pr.second << " ";
  }
  cout << endl;
}
