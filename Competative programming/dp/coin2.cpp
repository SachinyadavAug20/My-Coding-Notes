#include <bits/stdc++.h>
#include <climits>
using namespace std;

#define fastio() (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr))
#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long

class Solution {
    // obs
    // will count using same => 
    // problem : give all permutation need only combination
    // solve: maintain order 
    int dp[305][5005];
    int fun(int index, int amount, vector<int>& coins) {
        if (amount == 0) return 1;
        if (index < 0) return 0;
        if (dp[index][amount] != -1) return dp[index][amount];
        int ways = fun(index - 1, amount, coins);
        if (amount >= coins[index]) {
            ways += fun(index, amount - coins[index], coins);
        }
        return dp[index][amount] = ways;
    }

public:
    int change(int amount, vector<int>& coins) {
        memset(dp, -1, sizeof(dp));
        return fun((int)coins.size() - 1, amount, coins);
    }
};
