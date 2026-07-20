#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long

class Solution {
public:
    int ans = 0;
    void dfs(vector<int>& matchsticks, int needL, int i, vector<int>& sides) {
        if (ans) return;
        if (i == matchsticks.size()) {
            for (int len : sides) {
                if (len != needL) return;
            }
            ans = 1;
            return;
        }
        for (int p = 0; p < 4; p++) {
            // equivalent states.
            bool duplicate = false;
            for (int j = 0; j < p; j++) {
                if (sides[j] == sides[p]) {
                    duplicate = true;
                    break;
                }
            }
            if (duplicate) continue;
            sides[p] += matchsticks[i];
            if (sides[p] > needL) {
                sides[p] -= matchsticks[i];
                continue;
            }
            dfs(matchsticks, needL, i + 1, sides);
            sides[p] -= matchsticks[i];
            if (sides[p] == 0)
                break;
        }
    }

    bool makesquare(vector<int>& matchsticks) {
        ans=0;
        int lengthsum = 0;
        for (int x : matchsticks) lengthsum += x;
        if (lengthsum % 4)
            return false;
        int needL = lengthsum / 4;
        sort(matchsticks.rbegin(), matchsticks.rend());
        for(int m:matchsticks) if (m > needL) return false;
        vector<int> sides(4, 0);
        dfs(matchsticks, needL, 0, sides);
        return ans;
    }
};
