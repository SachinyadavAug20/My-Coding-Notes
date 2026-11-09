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
    int min_first = LLONG_MAX;
    int min_second = LLONG_MAX;
    int sum_second = 0;
    for (int i = 0; i < n; ++i) {
      int m;
      cin >> m;
      vector<int> a(m);
      for (int j = 0; j < m; ++j) {
        cin >> a[j];
      }
      sort(a.begin(), a.end());
      min_first = min(min_first, a[0]);
      min_second = min(min_second, a[1]);
      sum_second += a[1];
    }
    int ans = sum_second - min_second + min_first;
    cout << ans << endl;
  }
  return 0;
}
