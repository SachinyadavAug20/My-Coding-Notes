#include <bits/stdc++.h>
#include <climits>
#include <cstring>
#include <vector>
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
public:
    static const int N=1e5+10;
    int dp[N];
    int fun(int amount, vector<int>& coins) {
        if (amount == 0) return 0;
        if(dp[amount]!=-1) return dp[amount];
        
        int ans = INT_MAX;
        for (int coin : coins) {
            if (amount - coin >= 0) {
                int res = fun(amount - coin, coins);
                if (res != INT_MAX) {
                    ans = min(ans, res + 1);
                }
            }
        }
        return dp[amount]=ans;
    }

    int coinChange(vector<int>& coins, int amount) {
        memset(dp,-1,sizeof(dp));
        int ans = fun(amount, coins);
        return (ans == INT_MAX) ? -1 : ans;
    }
};
