#include <bits/stdc++.h>
#include <utility>
using namespace std;
#define ll long long

class Solution_hack_build_on_hack_soln {
public:
  vector<vector<int>> insert(vector<vector<int>> &intervals,
                             vector<int> &newInterval) {
    vector<vector<int>> ans;
    int ns = newInterval[0], ne = newInterval[1];
    int i = 0, n = intervals.size();
    if (n == 0)
      return {newInterval};
    bool isUsed = 0;
    while (i < n) {
      int s = intervals[i][0];
      int e = intervals[i][1];
      if (ne < s) {
        if (isUsed == 0) {
          if (i - 1 >= 0 && intervals[i - 1][1] < s) {
            ans.push_back(newInterval);
          } else if (i == 0) {
            if (ne < s) {
              ans.push_back(newInterval);
            }
          }
        }
        while (i < n) {
          ans.push_back(intervals[i]);
          i++;
        }
        break;
      } else {
        if (ns > e) {
          ans.push_back(intervals[i]);
          i++;
        } else {
          isUsed = 1;
          int l = min(s, ns);
          int r = max(e, ne);
          i++;
          while (i < n && r >= intervals[i][0]) {
            r = max(r, intervals[i][1]);
            i++;
          }
          ans.push_back({l, r});
        }
      }
    }
    int an = ans.size();
    if (an - 1 >= 0 && ans[an - 1][1] < ns) {
      if (isUsed == 0)
        ans.push_back(newInterval);
    }
    return ans;
  }
};
class Solution {
public:
  vector<vector<int>> insert(vector<vector<int>> &intervals,
                             vector<int> &newInterval) {
    vector<vector<int>> ans;
    int n=intervals.size();
    for(int i=0;i<n;i++){
        if(newInterval[1]<intervals[i][0]){
            ans.push_back(newInterval);
            while(i<n){
                ans.push_back(intervals[i]);
                i++;
            }
            return ans;
        }else if(newInterval[0]>intervals[i][1]){
            ans.push_back(intervals[i]);
        }else{
            newInterval={min(newInterval[0],intervals[i][0]),max(newInterval[1],intervals[i][1])};
        }
    }
    ans.push_back(newInterval);
    return ans;
  }
};
