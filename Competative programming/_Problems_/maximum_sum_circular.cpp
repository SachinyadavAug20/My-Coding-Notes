#include <bits/stdc++.h>
#include <numeric>
using namespace std;
#define ll long long

class Solution {
public:
  // plan
  // find global minimum subarray sum
  // and remove the minmum subarray and rest will be circular maximum subarray
  int maxSubarraySumCircular(vector<int> &nums) {
    int n = nums.size(), total = 0;
    int curMax = 0, globalMax = nums[0];
    int curMin = 0, globalMin = nums[0];
    for (int n :nums) {
      curMax=max(curMax+n,n);
      curMin=min(curMin+n,n);
      total += n;
      globalMax=max(globalMax,curMax);
      globalMin=min(globalMin,curMin);
    }
    return globalMax<0?globalMax:max(total - globalMin, globalMax);
  }
};
