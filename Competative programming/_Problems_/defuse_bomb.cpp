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
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> ans(n, 0);
        if (k == 0) return ans;
        vector<int> prefix(2 * n + 1, 0);
        for (int i = 0; i < 2 * n; i++) {
            prefix[i + 1] = prefix[i] + code[i % n];
        }
        for (int i = 0; i < n; i++) {
            if (k > 0) {
                ans[i] = prefix[i + k + 1] - prefix[i + 1];
            } else {
                ans[i] = prefix[i + n] - prefix[i + n + k];
            }
        }

        return ans;
    }
};
