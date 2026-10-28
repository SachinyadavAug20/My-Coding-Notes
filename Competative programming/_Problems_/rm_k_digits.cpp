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
    string removeKdigits(string num, int k) {
        string st = "";
        for (char c : num) {
            while (!st.empty() && k > 0 && st.back() > c) {
                st.pop_back();
                k--;
            }
            st.push_back(c);
        }
        while (k > 0 && !st.empty()) {
            st.pop_back();
            k--;
        }
        int nonZeroIdx = 0;
        while (nonZeroIdx < st.size() && st[nonZeroIdx] == '0') {
            nonZeroIdx++;
        }
        string result = st.substr(nonZeroIdx);
        return result.empty() ? "0" : result;
    }
};
