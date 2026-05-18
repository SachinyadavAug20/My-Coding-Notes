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

int main(int argn, char *argv[]) {
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

















class NumMatrix {
public:
    vector<vector<int>> pSumMa;
    vector<vector<int>> ma;
    int n,m;
    NumMatrix(vector<vector<int>>& matrix) {
        ma=matrix;
        n=ma.size();
        m=ma[0].size();
        vector<vector<int>> hsh(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int a=0;
                if(i-1>=0) a+=hsh[i-1][j];
                if(j-1>=0) a+=hsh[i][j-1];
                hsh[i][j]=a+ma[i][j];
            }
        }
        pSumMa=hsh;
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        int ans=pSumMa[row2][col2];
        if(row1-1>=0) ans-=pSumMa[row1-1][col2];
        if(col1-1>=0) ans-=pSumMa[row1][col1-1];
        ans+=pSumMa[row1][col1];
        
        return ans;
    }
};
