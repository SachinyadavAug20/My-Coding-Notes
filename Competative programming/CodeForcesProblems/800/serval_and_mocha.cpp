#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr))
#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long
// obs
// adding numbers for GCD -> will stay gcd constant or increase it(never
// decrease)

signed main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    bool possible = false;
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        if (gcd(a[i], a[j]) <= 2) {
          possible = true;
          break;
        }
      }
      if (possible)
        break;
    }
    if (possible) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}
