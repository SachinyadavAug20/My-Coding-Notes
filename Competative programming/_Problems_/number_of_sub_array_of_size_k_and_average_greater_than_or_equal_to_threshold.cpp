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

#include <vector>

class Solution {
public:
  int numOfSubarrays(std::vector<int> &arr, int k, int threshold) {
    int targetSum = k * threshold; // for that average 
                                   // now, subset sum using k size window
    int currentSum = 0;
    int count = 0;
    for (int i = 0; i < k; ++i) {
      currentSum += arr[i];
    }

    if (currentSum >= targetSum) {
      count++;
    }

    for (int i = k; i < arr.size(); ++i) {
      currentSum += arr[i] - arr[i - k];

      if (currentSum >= targetSum) {
        count++;
      }
    }

    return count;
  }
};
