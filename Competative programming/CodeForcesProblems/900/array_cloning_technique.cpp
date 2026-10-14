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

    map<int, int> freq;
    int max_freq = 0;

    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        freq[x]++;
        max_freq = max(max_freq, freq[x]);
    }

    if (max_freq == n) {
        cout << 0 << "\n";
        return;
    }

    int operations = 0;
    int current = max_freq;

    while (current < n) {
        operations++;
        int add = min(n - current, current);
        operations += add;
        current += add;
    }

    cout << operations << "\n";
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
