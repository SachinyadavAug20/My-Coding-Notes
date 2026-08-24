#include <bits/stdc++.h>
#include <climits>
using namespace std;
#define ll long long

class Solution {
public:
  int amount;
  map<pair<int, int>, int> memo;
  int INF = 1e9;

  int dfs(vector<int> &coins, int current, int i) {
    if (current == amount)
      return 0;
    if (i >= coins.size())
      return INF;
    if (memo.count({i, current})) return memo[{i, current}];
    int take = INF;
    if (coins[i] <= amount - current) { 
        take = 1 + dfs(coins, current + coins[i], i);
    }
    int skip = dfs(coins, current, i + 1);

    return memo[{i, current}] = min(take, skip);
  }

  int coinChange(vector<int> &coins, int amount) {
    this->amount = amount;
    memo.clear();
    int ans = dfs(coins, 0, 0);
    return (ans >= INF) ? -1 : ans;
  }
};

