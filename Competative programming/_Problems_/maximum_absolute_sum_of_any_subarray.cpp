#include <bits/stdc++.h>
using namespace std;

#define fastio() (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr))
#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

// Kadane's Algorithm
class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int max_so_far = 0, curr_max = 0;
        int min_so_far = 0, curr_min = 0;
        for (int x : nums) {
            curr_max = max(0, curr_max + x);
            max_so_far = max(max_so_far, curr_max);
            curr_min = min(0, curr_min + x);
            min_so_far = min(min_so_far, curr_min);
        }
        return max(max_so_far, abs(min_so_far));
    }
};
