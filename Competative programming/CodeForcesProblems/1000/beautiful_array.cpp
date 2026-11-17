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
// Valid sum s must lie between kb and kb + n*(k - 1), because each of the n elements can hold at most k - 1 remainder without changing floor(a[i] / k).
// Set a[0] = kb (and all other elements to 0) to fix the required beauty b, then greedily distribute the remaining sum s - kb across the array in chunks of at most k - 1

signed main() {
  fastio();
  int t;
  cin >> t;
  while (t--) {
    int n, k, b, s;
    cin >> n >> k >> b >> s;

    int min_s = k * b;
    int max_s = k * b + n * (k - 1);

    if (s < min_s || s > max_s) {
      cout << -1 << endl;
      continue;
    }

    vector<int> a(n, 0);
    a[0] = min_s;
    int rem = s - min_s;

    for (int i = 0; i < n && rem > 0; i++) {
      int add = min(rem, k - 1);
      a[i] += add;
      rem -= add;
    }

    for (int i = 0; i < n; i++) {
      cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;
  }
  return 0;
}
