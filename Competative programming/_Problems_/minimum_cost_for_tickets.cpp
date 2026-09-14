#include <algorithm>
#include <set>
#include <vector>

using namespace std;

class Solution {
public:
  int mincostTickets(vector<int> &days, vector<int> &costs) {
    set<int> travelDays(days.begin(), days.end());
    int lastDay = days.back();

    vector<int> dp(lastDay + 1, 0);

    for (int i = 1; i <= lastDay; ++i) {
      if (travelDays.find(i) == travelDays.end()) {
        dp[i] = dp[i - 1];
        continue;
      }
      int cost1 = dp[i - 1] + costs[0];
      int cost7 = dp[max(0, i - 7)] + costs[1];
      int cost30 = dp[max(0, i - 30)] + costs[2];
      dp[i] = min({cost1, cost7, cost30});
    }
    return dp[lastDay];
  }
};
