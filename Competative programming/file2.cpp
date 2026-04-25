#include <bits/stdc++.h>
#include <queue>
#include <string>
#include <variant>
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

vector<vector<int>> vis(8, vector<int>(8,0));
vector<vector<int>> level(8, vector<int>(8,0));

pair<int,int> stringToPos(string s){
        return {s[0]-'a',s[1]-'1'};
}
void reset(){
    for (int i=0; i<8; i++) {
        for (int j=0; j<8; j++) {
            level[i][j]=0;
            vis[i][j]=0;
        }
    }
}

vector<pair<int,int>> movements={
    {1,2},{-1,2},
    {1,-2},{-1,-2},
    {2,1},{-2,1},
    {2,-1},{-2,-1},
};
bool isValidCord(pair<int,int> p){
    if(p.first<0 || p.second<0) return false;
    if(p.first>=8 || p.second>=8) return false;
    if(vis[p.first][p.second]) return false;
    return true;
}


int bfs(string sr,string des){
    int sourceX=stringToPos(sr).first,sourceY=stringToPos(sr).second;
    int destinationX=stringToPos(des).first,destinationY=stringToPos(des).second;
    queue<pair<int,int>> q;

    pair<int,int>curr_p={sourceX,sourceY};
    q.push(curr_p);
    vis[curr_p.first][curr_p.second]=1;
    while (!q.empty()) {
        curr_p=q.front();
        q.pop();
        for(auto movement:movements){
            pair<int,int> newCor={curr_p.first+movement.first,curr_p.second+movement.second};
            if(isValidCord(newCor)){
                q.push(newCor);
                vis[newCor.first][newCor.second]=1;
                level[newCor.first][newCor.second]=level[curr_p.first][curr_p.second]+1;
            }
        }
    }
    return level[destinationX][destinationY];
}

int main(int argn, char *argv[]) {
    int q;
    cin>>q;
    while (q--) {
        string p1,p2;
        cin>>p1>>p2;
        reset();
        cout<<bfs(p1, p2)<<endl;
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


