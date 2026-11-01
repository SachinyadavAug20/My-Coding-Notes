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
// if there exist a triplete of i,j and k then there must be triplete of x,x+1,x+2 in it for condition a[i]<a[j]>a[k]

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    for (int i = 1; i < n - 1; ++i) {
        if (p[i - 1] < p[i] && p[i] > p[i + 1]) {
            cout << "YES" << endl;
            cout << i << " " << i + 1 << " " << i + 2 << endl;
            return;
        }
    }
    cout << "NO" << endl;
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
