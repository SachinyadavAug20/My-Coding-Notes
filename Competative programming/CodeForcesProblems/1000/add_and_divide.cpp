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
    int a, b;
    cin >> a >> b;

    int ans = INF;

    for (int i = 0; i <= 32; i++) {
        int curr_b = b + i;
        if (curr_b == 1) continue; 

        int temp_a = a;
        int ops = i;

        while (temp_a > 0) {
            temp_a /= curr_b;
            ops++;
        }

        ans = min(ans, ops);
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
