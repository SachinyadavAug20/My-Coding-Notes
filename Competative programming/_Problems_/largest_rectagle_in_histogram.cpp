// https://leetcode.com/problems/largest-rectangle-in-histogram/submissions/2015674185/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

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

