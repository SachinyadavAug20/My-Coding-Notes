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
// r,y,g => light and repeat patter after n-seconds at ith second s[i] is on
// at ith second s[i%n] light is on
// minimum time to guratte cross is maximum distance of g from current char in circular array
// avoid cycle by s+=s (double it)
// scan backward so get all list in closest g then n to 0 get ch place

signed main() {
    fastio();
    int t;
    cin>>t;
    while (t--) {
        int n;
        char ch;
        string s;
        cin>>n>>ch>>s;
        s+=s;
        int last_g = -1;
        int ans = 0;
        for (int i = 2 * n - 1; i >= 0; i--) {
            if (s[i] == 'g') last_g = i;
            if (i < n && s[i] == ch) {
                ans = max(ans, last_g - i);
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
