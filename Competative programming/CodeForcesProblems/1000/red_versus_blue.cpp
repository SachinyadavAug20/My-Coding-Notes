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

void solve() {
    int n, r, b;
    cin >> n >> r >> b;

    int base_r = r / (b + 1);
    int extra_r = r % (b + 1);

    string ans = "";
    for (int i = 0; i <= b; i++) {
        int count = base_r + (i < extra_r ? 1 : 0);
        ans += string(count, 'R');
        if (i < b) {
            ans += 'B';
        }
    }

    cout << ans << endl;
}

signed main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
