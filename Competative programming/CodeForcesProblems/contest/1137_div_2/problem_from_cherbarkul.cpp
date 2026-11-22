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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int window_len = n - k + 1;
    int ans = 0;
    int current_streak = 1;
    if (window_len == 1) {
        cout << k << '\n';
        return;
    }
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            current_streak++;
        } else {
            current_streak = 1;
        }
        
        if (current_streak >= window_len) {
            ans++;
        }
    }
    cout << ans << '\n';
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
