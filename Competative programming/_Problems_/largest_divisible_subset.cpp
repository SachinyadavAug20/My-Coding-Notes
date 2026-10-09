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

/*

Sort First: Always sort the nums array in ascending order. This guarantees that you only need to check one-way divisibility (nums[i] % nums[j] == 0), heavily simplifying the logic.   

Leverage Transitivity: The solution relies entirely on the mathematical property of transitivity: if a divides b, and b divides c, then a divides c. This allows us to build chains.

DP for Sub-problems: Use a Dynamic Programming (DP) array where dp[i] tracks the maximum length of a valid subset that specifically ends at nums[i].

Track the Parents: You must use a secondary array (often called a hash or parent array) to store the index of the previous element in the chain. Without this, you only know the size of the subset, not the elements inside it.

Look Backwards: For every number at index i, you must use a nested loop to look back at all previous numbers j (where j<i) to see if nums[i] is a multiple of nums[j] and if attaching it creates a longer chain.   

Save the Global Maximum: As you fill the DP array, actively track the global maximum length and the specific index where this longest chain terminates.

Trace the Path: To generate the final output, start at the maximum index and use your parent tracking array to walk backward through the chain, collecting each number before finally reversing the list.   

*/

class Solution {
public:
  vector<int> largestDivisibleSubset(vector<int> &nums) {
    int n = nums.size();
    if (n == 0)
      return {};

    sort(nums.begin(), nums.end());
    vector<int> dp(n, 1);
    vector<int> hash(n);
    for (int i = 0; i < n; i++) {
      hash[i] = i;
    }

    int maxi = 1;
    int lastIndex = 0; 
    for (int i = 1; i < n; i++) {
      for (int j = 0; j < i; j++) {
        if (nums[i] % nums[j] == 0 && dp[i] < dp[j] + 1) {
          dp[i] = dp[j] + 1;
          hash[i] = j;
        }
      }
      if (dp[i] > maxi) {
        maxi = dp[i];
        lastIndex = i;
      }
    }

    vector<int> result;
    result.push_back(nums[lastIndex]);
    while (hash[lastIndex] != lastIndex) {
      lastIndex = hash[lastIndex];
      result.push_back(nums[lastIndex]);
    }
    reverse(result.begin(), result.end());
    return result;
  }
};
