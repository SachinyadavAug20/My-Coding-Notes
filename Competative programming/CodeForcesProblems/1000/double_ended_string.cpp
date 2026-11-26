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
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    int max_len = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int len = 0;
            while (i + len < n && j + len < m && a[i + len] == b[j + len]) {
                len++;
            }
            max_len = max(max_len, len);
        }
    }

    cout << (n + m - 2 * max_len) << endl;
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
