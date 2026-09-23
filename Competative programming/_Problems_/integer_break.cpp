#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr))
#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long

class Solution {
public:
  int integerBreak(int n) {
    vector<int> dp(n + 1, 0);
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
      for (int j = 1; j < i; j++) {
        dp[i] = max(dp[i], max(j * (i - j), j * dp[i - j]));
      }
    }

    return dp[n];
  }
};
