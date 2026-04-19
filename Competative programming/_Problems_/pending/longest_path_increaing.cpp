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

// https://leetcode.com/problems/longest-increasing-path-in-a-matrix/description/  
// here, increasing order will do work of visited array
const int N = 300;
int cc=0;
vector<vector<int>> PlenghtOflongestpath(N,vector<int>(N,0));
void dfs_increaing_path(int i,int j,vector<vector<int>>& matrix,int count,int parent=-1){
    int n=matrix.size(),m=matrix[0].size();
    if((i<0 || j<0)||(i>=n ||j>=m)) return;
    if(matrix[i][j]>parent){
        // cout<<"   "<<cc<<endl;
        count++;
        cc=max(count,cc);
        dfs_increaing_path(i+1, j, matrix,count, matrix[i][j]);
        dfs_increaing_path(i-1, j, matrix,count, matrix[i][j]);
        dfs_increaing_path(i, j+1, matrix,count, matrix[i][j]);
        dfs_increaing_path(i, j-1, matrix,count, matrix[i][j]);
    }
}
int longestIncreasingPath(vector<vector<int>>& matrix) {
    int n=matrix.size(),m=matrix[0].size();
    int count=0;
    for (int i=0; i<n; i++) {
       for (int j=0; j<m; j++) {
            cc=0;
            dfs_increaing_path(i, j, matrix,0);
            cout<<">> "<<cc<<endl;
            hsh[i][j]=cc;
            count=max(cc,count);
        }
    }
    return count;
}


int main(int argn, char *argv[]) {
    int n,m;
    cin>>n>>m;
vector<vector<int>> matrix(n,vector<int>(m));
    for (int i=0; i<n; i++) {
       for (int j=0; j<m; j++) {
           cin>>matrix[i][j];
        }
    }
    cout<<longestIncreasingPath(matrix);
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


