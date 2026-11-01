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
public:
    static const int N=1e5+10;
    int dp[N];
    int steps=0;
    int fun(int amount, vector<int>& coins) {
        if (amount == 0){
            steps++;
            return 0;
        } 
        if(dp[amount]!=-1){
            if(dp[amount]!=INT_MAX) steps++;
            return dp[amount];
        }
        
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

    int change(int amount,vector<int>& coins) {
        steps=0;
        memset(dp,-1,sizeof(dp));
        return steps;
    }
};

