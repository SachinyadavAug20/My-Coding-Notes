#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    // plan
    // circular
    map<pair<int, bool>, int> dp;
    int n;
    int dfs(vector<int>& nums, int i, bool canTake) {
        if (i == n) return 0;
        
        if (dp.find({i, canTake}) != dp.end()) {
            return dp[{i, canTake}];
        }
        int take = 0;
        if (canTake) {
            take = nums[i] + dfs(nums, i + 1, false);
        }
        int noTake = dfs(nums, i + 1, true);
        int ans = max(take, noTake);
        dp[{i, canTake}] = ans;
        return ans;
    }

    int rob(vector<int>& nums) {
        dp.clear();
        n=nums.size()-1;
        if(n==0) return nums[0];
        int m1=dfs(nums,0,true);
        n=nums.size();
        dp.clear();
        int m2=dfs(nums,1,true);
        return max(m1,m2);
    }
};
