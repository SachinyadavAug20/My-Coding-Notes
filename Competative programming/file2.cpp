#include <bits/stdc++.h>
using namespace std;
#define ll long long

void printVect(vector<unsigned> a);
void printprimefactors(vector<pair<int, int>> a);
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a);
void printVectSS(vector<pair<pair<int, int>, int>> a);



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



/*
 https://codeforces.com/contest/776/problem/B
 https://www.hackerearth.com/problem/algorithm/the-game-of-oxa-bb3d2676/
 https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/practice-problems/algorithm/xor-challenge-2420f189/
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
