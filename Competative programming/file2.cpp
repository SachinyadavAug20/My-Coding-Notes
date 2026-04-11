#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printVect(vector<unsigned> a);
void printprimefactors(vector<pair<int, int>> a);
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a);
void printVectSS(vector<pair<pair<int, int>, int>> a);

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
    cout<<"No of loops : "<<backed_vertex/2<<endl;
    return 0;
}



/*
 https://codeforces.com/contest/776/problem/B
 https://www.hackerearth.com/problem/algorithm/the-game-of-oxa-bb3d2676/
 https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/
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
