#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr))
#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long

class SolutionW {
public:
  int findPeakElement(vectoj<int> &nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
      bool l = i - 1 == -1 ? true : nums[i] > nums[i - 1];
      bool r = i + 1 == n ? true : nums[i] > nums[i + 1];
      if (l && r)
        return i;
    } // O(n) wrong
  }
};

// obs
// if element increased peak to right
// if element decreased peak to left
class Solution {
public:
  int findPeakElement(vector<int> &nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
      int mid = left + (right - left) / 2;
      if (nums[mid] < nums[mid + 1]) {
        left = mid + 1;
      }
      else {
        right = mid;
      }
    }
    return left;
  }
};
