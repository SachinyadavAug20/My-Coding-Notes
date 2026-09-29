#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int maxFrequency(vector<int> &nums, int k) {
    sort(nums.begin(), nums.end());
    long long left = 0;
    long long total_sum = 0;
    int max_freq = 0;

    for (int right = 0; right < nums.size(); ++right) {
      total_sum += nums[right];
      while ((long long)nums[right] * (right - left + 1) - total_sum > k) {
        total_sum -= nums[left];
        left++;
      }
      max_freq = max(max_freq, (int)(right - left + 1));
    }

    return max_freq;
  }
};
