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
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].ff;
        a[i].ss = i + 1;
    }
    sort(a.rbegin(), a.rend());
    vector<int> ans(n + 1, 0);
    ans[0] = 0; 
    int total_time = 0;

    for (int i = 0; i < n; i++) {
        int dist = (i / 2) + 1;
        int coord = (i % 2 == 0) ? dist : -dist;
        
        ans[a[i].ss] = coord;
        total_time += 2 * a[i].ff * dist;
    }

    cout << total_time << endl;
    for (int i = 0; i <= n; i++) {
        cout << ans[i] << (i == n ? "" : " ");
    }
    cout << endl;
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
