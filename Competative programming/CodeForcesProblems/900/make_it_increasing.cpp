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

signed main() {
  fastio();
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
    }

    int ops = 0;
    bool possible = true;

    for (int i = n - 2; i >= 0; --i) {
      while (a[i] >= a[i + 1] && a[i] > 0) {
        a[i] /= 2;
        ops++;
      }
      if (a[i] >= a[i + 1]) {
        possible = false;
        break;
      }
    }

    if (possible) {
      cout << ops << endl;
    } else {
      cout << -1 << endl;
    }
  }

  return 0;
}
