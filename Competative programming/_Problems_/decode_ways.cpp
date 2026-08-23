#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
  unordered_map<int, int> dp;
  int n;
  int dfs(string &s, int i) {
    if (i == n) return 1;
    if (dp.find(i) != dp.end()) return dp[i];
    if (s[i] == '0') return 0;
    int ways = dfs(s, i + 1);
    if (i + 1 < n) {
      int num = (s[i] - '0') * 10 + (s[i + 1] - '0');
      if (num >= 10 && num <= 26)
        ways += dfs(s, i + 2);
    }
    return dp[i] = ways;
  }

  int numDecodings(string s) {
    n = s.size();
    dp.clear();

    return dfs(s, 0);
  }
};
