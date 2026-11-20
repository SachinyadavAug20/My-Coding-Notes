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
    int lengthOfLastWord(string s) {
        int curr = 0;
        int prev = 0;
        for (char ch : s) {
            if (ch == ' ') {
                if (curr != 0) {
                    prev = curr;
                    curr = 0;
                }
            } else {
                curr++;
            }
        }
        return curr != 0 ? curr : prev;
    }
};
