// https://leetcode.com/problems/3sum/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
  vector<vector<int>> threeSum(vector<int> &nums) {
    // 3sum = 1 + 2sum
    int n = nums.size();
    set<vector<int>> ans; // avoid duplicates
    sort(nums.begin(), nums.end()); // for 2sum without hsh 
    for (int k = 0; k < n; k++) {
      int target = -1 * nums[k]; // to 3sum to zero
      if (k != 0 && nums[k - 1] == nums[k]) continue; // avoid duplicate
        // 2sum
      for (int i = k + 1, j = n - 1; i < j; i++) {
        if (nums[i] + nums[j] == target) {
          vector<int> nn = {nums[k], nums[i], nums[j]};
          sort(nn.begin(), nn.end());
          ans.insert(nn);
        }
        if (nums[i] + nums[j] > target) {
          j--;
          i--;
        }
      }
    }
    vector<vector<int>> ansff;
    for (auto v : ans) {
      ansff.push_back(v);
    }
    return ansff;
  } // O(nlogn + n^2) == O(n^2), spaces O(n)
};
