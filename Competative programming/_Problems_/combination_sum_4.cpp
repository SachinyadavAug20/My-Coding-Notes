#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
  int target = 0;
  vector<int> dp;

  int dfs(vector<int> &nums, int sum) {
    if (sum == target) return 1;
    if (sum > target) return 0;

    if (dp[sum] != -1) return dp[sum];

    int ways = 0;

    for (int num : nums) {
      ways += dfs(nums, sum + num);
    }

    return dp[sum] = ways;
  }

  int combinationSum4(vector<int> &nums, int target) {
    this->target = target;
    dp.assign(target + 1, -1);

    return dfs(nums, 0);
  }
};
