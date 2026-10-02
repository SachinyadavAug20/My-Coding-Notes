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

// obs
// take element remove emenets to manage size of window
// take a subseuqne has r-l+1 subsequence as answer

class Solution {
public:
  int numSubarrayProductLessThanK(vector<int> &nums, int k) {
    if (k <= 1) return 0;
    int n = nums.size();
    int l = 0;
    long long product = 1;
    int ans = 0;
    for (int r = 0; r < n; r++) {
      product *= nums[r];
      while (l < n && product >= k) {
        product /= nums[l];
        l++;
      }
      ans += (r - l + 1);
    }
    return ans;
  }
};
