#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int numSquares(int n) {
    vector<int> dp(n + 1, n); // 1 is square number n = 1+1+1...+1 ;
    dp[0] = 0; // special

    for (int i = 1; i <= n; ++i) {
      for (int j = 1; j * j <= i; ++j) {
        dp[i] = min(dp[i], dp[i - j * j] + 1);
      }
    }

    return dp[n];
  }
};
