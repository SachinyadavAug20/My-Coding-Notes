// https://leetcode.com/problems/4sum/description/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
  vector<vector<int>> fourSum(vector<int> &nums, int target) {
    // 4sum = 1 + 3sum
// add *1LL to avoid overflow problem
    int n = nums.size();
    set<vector<int>> ans;           // avoid duplicates
    sort(nums.begin(), nums.end()); // for 2sum without hsh
    for (int k = 0; k < n; k++) {
      if (k != 0 && nums[k - 1] == nums[k]) continue;
      for (int l = k + 1; l < n; l++) {
        if (l != k + 1 && nums[l] == nums[l - 1]) continue;
        long long aim = target - (nums[k]*1LL + nums[l]*1LL); // to sum to target
        // 2sum
        for (int i = l + 1, j = n - 1; i < j; i++) {
          if (nums[i]*1LL + nums[j] == aim) {
            vector<int> nn = {nums[k], nums[i], nums[j], nums[l]};
            sort(nn.begin(), nn.end());
            ans.insert(nn);
          }
          if (nums[i] + nums[j] > aim) {
            j--;
            i--;
          }
        }
      }
    }
    vector<vector<int>> ansff;
    for (auto v : ans) {
      ansff.push_back(v);
    }
    return ansff;
  } // O(nlogn + n^3) == O(n^3), spaces O(n)
};

