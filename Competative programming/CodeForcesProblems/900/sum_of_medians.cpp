#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long

// obs
// to get max need to find sum of 1,2,...,sz =>
// seeing test case take %k==0 and %k==1 ... %k==k-1 pos and get max

signed main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    int sz = n * k;
    vector<int> a(sz);
    for (int i = 0; i < sz; i++) {
      cin >> a[i];
    }
    int step = n / 2 + 1;
    int idx = sz - step;
    int ans = 0;
    for (int i = 0; i < k; i++) {
      ans += a[idx];
      idx -= step;
    }
    cout << ans << "\n";
  }
  return 0;
}
