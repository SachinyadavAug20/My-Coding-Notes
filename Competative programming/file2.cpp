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
void printVector(vector<int> a) {
  for (int n : a) {
    cout << n << " ";
  }
  cout << endl;
}

int main(int argn, char *argv[]) { return 0; }

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

class Solution {
public:
  int largestRectangleArea(vector<int> &heights) {
    stack<pair<int, int>> stk; // height:index stack
    int maxA = 0, n = heights.size();
    for (int i = 0; i < n; i++) {
      int c_h = heights[i];
      if (!stk.empty() && stk.top().first > c_h) {
        int ind;
        while (!stk.empty() && stk.top().first > c_h) {
          int newArea = (i - stk.top().second) * stk.top().first;
          maxA = max(maxA, newArea);
          ind = stk.top().second;
          stk.pop();
        }
          // back extends as front extends ended
        stk.push({c_h, ind});
      }
      stk.push({c_h,i});
    }
    while(!stk.empty()){
        int h=stk.top().first;
        int w=n-stk.top().second;
        int newArea=w*h;
        maxA=max(maxA,newArea);
        stk.pop();
    }
    return maxA;
  }
};
