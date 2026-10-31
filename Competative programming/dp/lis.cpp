#include <bits/stdc++.h>
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
    int lengthOfLIS(vector<int>& nums) {
        int ans=0;
        memset(dp, -1, sizeof(dp));
        int n=nums.size();
        for(int i=0;i<n;i++){
            ans=max(ans,lis(i,nums));
        }
        return ans;
    }
    int lis(int i,vector<int> &a){
        if(i<=0) return 1;
        int score_max=1;
        if(dp[i]!=-1) return dp[i];
        for(int j=i-1;j>=0;j--){
            if(a[j]<a[i]){
                score_max=max(score_max,1+lis(j,a));
            }
        }
        return dp[i]=score_max;
    }
};
