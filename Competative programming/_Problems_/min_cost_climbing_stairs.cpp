#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long

class Solution {
public:
  int n;
  unordered_map<int, int> dp;
  int dfs(vector<int> &cost, int i) {
    if (i >= n) return 0;
    if (dp.find(i) != dp.end()) return dp[i];
    int res = cost[i] + min(dfs(cost, i + 1), dfs(cost, i + 2));
    return dp[i] = res;
  }

  int minCostClimbingStairs(vector<int> &cost) {
    dp.clear();
    n = cost.size();
    return min(dfs(cost, 0), dfs(cost, 1));
  }
};
