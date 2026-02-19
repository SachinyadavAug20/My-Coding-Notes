#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
int long long hashPnum[N];
int long long hashNnum[N];
bool containsDuplicate(vector<int> &nums) {
  // Empty hash
  for (int i = 0; i < N; i++) {
    hashPnum[i] = 0;
    hashNnum[i] = 0;
  }
  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] >= 0) {
      if (nums[i] > N - 10) {
        nums[i] %= N;
      }
      hashPnum[nums[i]]++;
    } else {
      if (abs(nums[i]) > N - 10) {
        nums[i] %= N;
      }
      hashNnum[abs(nums[i])]++;
    }
  }
  for (int i = 0; i < nums.size(); i++) {

    if (nums[i] >= 0) {
      if (nums[i] > N - 10) {
        nums[i] %= N;
      }
      if (hashPnum[nums[i]] >= 2) {
        return true;
      }
    } else {
      if (abs(nums[i]) > N - 10) {
        nums[i] %= N;
      }
      if (hashNnum[abs(nums[i])] >= 2) {
        return true;
      }
    }
  }
  return false;
}
int main() {
  vector<int> nums = {1000000000, 1000000000, 11};
  cout << containsDuplicate(nums);
}

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
  vector<int> merged;
    
    return 2.3;
}
