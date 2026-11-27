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
    int n, k, p;
    cin >> n >> k >> p;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int ans = 0;
    int idx = 0;
    while (idx + k <= n) {
        int block_sum = 0;
        for (int j = 0; j < k; j++) {
            block_sum += a[idx + j];
        }
        if (block_sum < p) {
            ans += p;
            idx += k;
        } else {
            break;
        }
    }
    while (idx < n) {
        ans += a[idx];
        idx++;
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
