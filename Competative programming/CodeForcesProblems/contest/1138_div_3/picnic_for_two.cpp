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
    int l, a, b;
    cin >> l >> a >> b;

    int ga = __gcd(l, a);
    int gb = __gcd(l, b);
    int common_step = (ga / __gcd(ga, gb)) * gb;

    cout << l / common_step << endl;
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
