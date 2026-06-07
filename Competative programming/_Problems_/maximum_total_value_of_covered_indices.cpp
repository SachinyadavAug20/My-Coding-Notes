// https://leetcode.com/contest/biweekly-contest-184/problems/maximum-total-value-of-covered-indices/ 
#include <bits/stdc++.h>
using namespace std;
#define ll long long

class SolutionMTVOC {
public:
    // logic in a range of 111 worst will be out
    long long maxTotal(vector<int>& nums, string s) {
        int n = nums.size();
        long long ans = 0;
        int i = 0;
        while (i < n) {
            if (s[i] == '0') {
                i++;
                continue;
            }
            int l = i;
            while (i < n && s[i] == '1') {
                i++;
            }
            int r = i - 1;
            if (l == 0) { // can't move
                for (int j = l; j <= r; j++) {
                    ans += nums[j];
                }
            }
            else {
                long long blockSum = 0;
                int mn = INT_MAX; // worst in range

                for (int j = l - 1; j <= r; j++) {
                    blockSum += nums[j];
                    mn = min(mn, nums[j]);
                }
                ans += blockSum - mn;
            }
        }
        return ans;
    }
};


