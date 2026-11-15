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
// for composite makeing sure 2 edge index 1 and value 1

signed main() {
  fastio();
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (n <= 3) {
      cout << -1 << "\n";
      continue;
    }
    if (n % 2 == 0) {
      for (int i = n; i >= 1; i -= 2) {
        cout << i << " ";
      }
      for (int i = n - 1; i >= 1; i -= 2) {
        cout << i << " ";
      }
    } else {
      vector<int> p(n + 1);
      p[3] = 3;
      vector<int> odds;
      for (int x = 5; x <= n; x += 2)
        odds.pb(x);
      odds.pb(1);
      int idx = 0;
      for (int i = 2; i <= n - 1; i += 2) {
        p[i] = odds[idx++];
      }
      vector<int> evens;
      for (int x = 4; x <= n - 1; x += 2)
        evens.pb(x);
      evens.pb(2);
      idx = 0;
      for (int i = 1; i <= n; i += 2) {
        if (i == 3)
          continue;
        p[i] = evens[idx++];
      }
      for (int i = 1; i <= n; i++) {
        cout << p[i] << " ";
      }
    }
    cout << "\n";
  }
  return 0;
}
