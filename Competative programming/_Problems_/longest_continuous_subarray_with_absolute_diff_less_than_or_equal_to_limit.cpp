#include <bits/stdc++.h>
#include <deque>
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

// min and max should be diff less than limit -> maximum size subarray
//
// intituation
// to get new max and min, -> have keep them in order (as removing element need
// to know min and max in O(1)) use as monotonic queue => decreasing order use
// queue -> dequeue

class Solution {
public:
  int longestSubarray(vector<int> &nums, int limit) {
    int ans = 0;
    deque<int> minQueue;
    deque<int> maxQueue;
    int s = 0, e = 0;
    while (e < nums.size()) {
      int x = nums[e];
      while (!minQueue.empty() && nums[minQueue.back()] >= x)
        minQueue.pop_back();
      minQueue.push_back(e);
      while (!maxQueue.empty() && nums[maxQueue.back()] <= x)
        maxQueue.pop_back();
      maxQueue.push_back(e);
      int mini = nums[minQueue.front()];
      int maxi = nums[maxQueue.front()];
      if (maxi - mini > limit) {
        s++;
        if (s > minQueue.front())
          minQueue.pop_front();
        if (s > maxQueue.front())
          maxQueue.pop_front();
      } else {
        ans = max(ans, e - s + 1);
        e++;
      }
    }
    return ans;
  }
};
