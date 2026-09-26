#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define fastio() (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr))
#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

signed main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        
        int ans = 0;
        for(int i = 0; i < n - 1; i++) {
            if (a[i] % 2 == a[i+1] % 2) {
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}

