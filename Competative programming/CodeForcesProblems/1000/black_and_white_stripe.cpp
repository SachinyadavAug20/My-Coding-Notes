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
// can color from white to black only no vice versa
// using fixed sized sliding window => find substring of size k with minimum no of White(W)

signed main() {
    fastio();
    int t;
    cin>>t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int white_count = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'W') white_count++;
        }
        int ans = white_count;
        for (int i = k; i < n; i++) {
            if (s[i] == 'W') white_count++;
            if (s[i - k] == 'W') white_count--;
            ans = min(ans, white_count);
        }

        cout << ans << endl;
    }
    return 0;
}
