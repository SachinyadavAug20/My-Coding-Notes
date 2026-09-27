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
  double new21Game(int n, int k, int maxPts) {
    if (k == 0 || n >= k + maxPts) {
      return 1.0;
    }
    vector<double> dp(n + 1, 0.0); // probability of having score i
    dp[0] = 1.0;
    double windowSum = 1.0;
    double probabilitySum = 0.0;
    for (int i = 1; i <= n; i++) {
      dp[i] = windowSum / maxPts;
      if (i < k) {
        windowSum += dp[i];
      } else {
        probabilitySum += dp[i];
      }
      if (i >= maxPts) {
        windowSum -= dp[i - maxPts];
      }
    }
    return probabilitySum;
  }
};
