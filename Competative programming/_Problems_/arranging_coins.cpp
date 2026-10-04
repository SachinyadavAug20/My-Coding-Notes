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

// sum or n natural -> n(n+1)/2

class Solution {
public:
    int arrangeCoins(int n) {
        int ans=1;
        while(n>=0){
            n-=ans;
            ans++;
        }
        return ans-1;
    }
};
