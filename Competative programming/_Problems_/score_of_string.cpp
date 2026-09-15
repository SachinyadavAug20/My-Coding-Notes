#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

class Solution {
public:
    int scoreOfString(string s) {
        int ans=0;
        int n=s.size();
        for(int i=0;i<n-1;i++){
            ans+=abs(s[i]-s[i+1]);
        }
        return ans;
    }
};
