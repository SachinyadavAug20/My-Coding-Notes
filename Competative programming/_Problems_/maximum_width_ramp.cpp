#include <bits/stdc++.h>
#include <stack>
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
    int maxWidthRamp(vector<int>& nums) {
        int n = nums.size();
        stack<int> st;
        for (int i = 0; i < n; ++i) {
            if (st.empty() || nums[st.top()] > nums[i]) {
                st.push(i);
            }
        }

        int max_width = 0;
        for (int j = n - 1; j >= 0; --j) {
            while (!st.empty() && nums[st.top()] <= nums[j]) {
                max_width = max(max_width, j - st.top());
                st.pop();
            }
            if (st.empty()) break;
        }

        return max_width;
    }
};
// obs
// can choose all i and j => O(n^2)
// 2 pass
// make descring monotonic stack of index(l->r)
// traverse r->l max j-top
