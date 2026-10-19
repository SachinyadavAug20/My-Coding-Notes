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

signed main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        int x, n;
        cin >> x >> n;
        int rem = n % 4;
        int start = n - rem + 1;
        for (int i = start; i <= n; i++) {
            if (abs(x) % 2 == 1) {
                x += i;
            } else {
                x -= i;
            }
        }
        cout << x << endl;
    }
    return 0;
}
