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
// bitwise AND operation can only preserve or clear bits (never set new ones) => can only reduce or constant
// also, a && a = a => so do any number of time no matter
// the minimal possible maximum value you can achieve across the entire array is simply the bitwise AND of all elements

signed main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int ans;
        cin >> ans;
        
        for (int i = 1; i < n; i++) {
            int x;
            cin >> x;
            ans &= x;
        }
        
        cout << ans << endl;
    }
    return 0;
}
