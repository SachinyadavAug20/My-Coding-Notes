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

class Solution {
public:
  int numSubarraysWithSum(vector<int> &nums, int goal) {
    unordered_map<int, int> prefix_counts;
    prefix_counts[0] = 1;

    int current_sum = 0;
    int total_subarrays = 0;

    for (int num : nums) {
      current_sum += num;

      if (prefix_counts.find(current_sum - goal) != prefix_counts.end()) {
        total_subarrays += prefix_counts[current_sum - goal];
      }
      prefix_counts[current_sum]++;
    }

    return total_subarrays;
  }
};
