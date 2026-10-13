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
    int countSeniors(vector<string>& details) {
        int count = 0;
        for (const string& s : details) {
            int age = (s[11] - '0') * 10 + (s[12] - '0');
            if (age > 60) {
                count++;
            }
        }
        return count;
    }
};
