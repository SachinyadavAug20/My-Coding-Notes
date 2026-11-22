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
    int k = 1;
    while ((k << 1) <= n - 1) {
        k <<= 1;
    }
    for (int i = n - 1; i >= k; i--) {
        cout << i << " ";
    }

    for (int i = 0; i < k; i++) {
        cout << i << (i == k - 1 ? "" : " ");
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
