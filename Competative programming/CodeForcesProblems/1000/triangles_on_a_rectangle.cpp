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
    int w, h;
    cin >> w >> h;

    int ans = 0;

    for (int i = 0; i < 2; i++) {
        int k;
        cin >> k;
        int first_x, last_x;
        for (int j = 0; j < k; j++) {
            int x;
            cin >> x;
            if (j == 0) first_x = x;
            if (j == k - 1) last_x = x;
        }
        ans = max(ans, (last_x - first_x) * h);
    }

    for (int i = 0; i < 2; i++) {
        int k;
        cin >> k;
        int first_y, last_y;
        for (int j = 0; j < k; j++) {
            int y;
            cin >> y;
            if (j == 0) first_y = y;
            if (j == k - 1) last_y = y;
        }
        ans = max(ans, (last_y - first_y) * w);
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
