#include <numeric>
#include <vector>

using namespace std;
class Solution {
public:
  bool canPartition(vector<int> &nums) {
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    if (totalSum % 2 != 0) {
      return false;
    }
    int target = totalSum / 2;

    vector<bool> dp(target + 1, false);// if sum of i is possible
    dp[0] = true;

    for (int num : nums) {
      for (int i = target; i >= num; i--) {
        if (dp[i - num]) {
          dp[i] = true;
        }
      }
      if (dp[target])
        return true;
    }
    return dp[target];
  }
};
