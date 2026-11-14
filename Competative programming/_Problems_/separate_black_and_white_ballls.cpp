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

// obs
// try to put all black to side where all are already black
// need to arrange like white then black 011, 001 etc
// so find all black from start and if find a next white 0 then add it in ans+=no_of_black buz need to shift all

class Solution {
public:
    long long minimumSteps(string s) {
        long long black_count = 0;
        long long ans = 0;
        for (char c : s) {
            if (c == '1') {
                black_count++;
            } else {
                ans += black_count;
            }
        }
        return ans;
    }
};
