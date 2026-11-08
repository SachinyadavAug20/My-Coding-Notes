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
#define int long long

class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        if (nums.empty()) return 0;

        int max_val = 0;
        for (int x : nums) {
            max_val = max(max_val, x);
        }

        vector<int> points(max_val + 1, 0);
        for (int x : nums) {
            points[x] += x;
        }

        int prev2 = 0;  
        int prev1 = points[1];  

        for (int i = 2; i <= max_val; ++i) {
            int curr = max(prev1, prev2 + points[i]);
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};
