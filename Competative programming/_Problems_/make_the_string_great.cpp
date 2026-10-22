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
    string makeGood(string s) {
        string result = "";
        for (char c : s) {
            if (!result.empty() && abs(result.back() - c) == 32) {
                result.pop_back();
            } else {
                result.push_back(c);
            }
        }
        return result;
    }
};
