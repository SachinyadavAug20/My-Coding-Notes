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
// For every food pile a_i, Luke's affinity v must lie within the valid range [a_i - x, a_i + x] to eat it
// Keep intersecting these valid ranges as you walk from left to right, which simply means tracking the running minimum and maximum of the current segment.
// Whenever the difference between the segment's maximum and minimum exceeds 2x (meaning the ranges no longer overlap), increment the change count and start a fresh segment from the current pile.

signed main() {
  fastio();
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int changes = 0;
    int mn = a[0], mx = a[0];
    for (int i = 1; i < n; i++) {
      mn = min(mn, a[i]);
      mx = max(mx, a[i]);
      if (mx - mn > 2 * x) {
        changes++;
        mn = a[i];
        mx = a[i];
      }
    }
    cout << changes << endl;
  }
  return 0;
}
