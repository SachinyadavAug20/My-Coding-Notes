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
// no of nearly full-filling
// need 1s and 0s for it.
// for 0s for each 1s take or not take each 0s
// if ans = (no of 1s)*(2^(no of 0s)) 

signed main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int s1=0,s0=0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i]==1) s1++;
            if(a[i]==0) s0++;
        }
        if(s1==0) cout<<0<<endl;
        else cout<<s1*(1LL<<s0)<<endl;
    }
    return 0;
}
