#include <bits/stdc++.h>
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

const int N=1e5+10;
vector<int> tree[N];
vector<int> parent(N); // each node has only 1 parent
void dfs(int v,int par=-1){
        parent[v]=par;
    for(int child:tree[v]){
        if(child==par) continue;
        dfs(child,v);
    }
}
vector<int> path(int v){
    vector<int> path;
    while(v!=-1){
        path.push_back(v);
        v=parent[v];
    }
    reverse(path.begin(),path.end());
    return path;
}

int main(int argn, char *argv[]) {
    int n;
    cin>>n;
    for (int i = 0; i < n-1; i++) {
        int v1,v2;
        cin>>v1>>v2;
        tree[v1].push_back(v2);
        tree[v2].push_back(v1);
    }
    dfs(1);
    // for(int i=1;i<n+1;i++){
    //     cout<<parent[i]<<endl;
    // }
    
    // LCA
    int v1,v2;
    cin>>v1>>v2;
    vector<int> path1=path(v1),path2=path(v2);

    int LCA=1;
    for(int i=0;i<min(path1.size(),path2.size());i++){
        if(path1[i]==path2[i]){
            LCA=path1[i];
        }else{
            break;
        }
    }
    cout<<LCA<<endl;  // O(V+E) == O(N)

  return 0;
}

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

