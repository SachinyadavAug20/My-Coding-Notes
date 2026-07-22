#include <bits/stdc++.h>
#include <unordered_set>
#include <vector>
using namespace std;
#define ll long long

class Solution {
public:
    // plan
    // can do same as matchstick(for each element have choose for any bucket k) will be K^N => gives TLE
    // slightly efficient solution -> O(k*2^n)
    // logic
    // make 1 bucket at a time and use visited
    // 
    int target;
    bool dfs(vector<int>& nums, vector<bool>& used,   int start,            int curSum,           int bucket, int k){
        if (bucket == k) return true;
        if (curSum == target) return dfs(nums, used, 0, 0, bucket + 1, k);
        for (int i = start; i < nums.size(); i++) {
            if (used[i]) continue;
            if (curSum + nums[i] > target) continue;
            used[i] = true;
            if (dfs(nums, used, i + 1, curSum + nums[i], bucket, k)) return true;
            used[i] = false;
        }
        return false;
    }
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int total = 0;
        for (int x : nums) total += x;
        if (total % k) return false;
        target = total / k;
        sort(nums.rbegin(), nums.rend());
        if (nums[0] > target) return false;
        vector<bool> used(nums.size(), false);
        return dfs(nums, used, 0, 0, 0, k);
    }
};
