#include <bits/stdc++.h>
#include <vector>
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
// if any a[i] is divisible by k then only product is divisble by k
// find min(k-a[i]%k) for all i to get min no of steps
// if any a[i] is divisible by k then only product is divisible by k, true for k=2,3,5 as they are prime 
// for k=4 can use 2 2s

signed main() {
  fastio();
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int ans = k;
    int even_cnt = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] % 2 == 0) {
        even_cnt++;
      }
      int rem = a[i] % k;
      if (rem == 0) {
        ans = 0;
      } else {
        ans = min(ans, k - rem);
      }
    }

    if (k == 4) {
      int ops_to_get_two_evens = max(0LL, 2 - even_cnt);
      ans = min(ans, ops_to_get_two_evens);
    }

    cout << ans << "\n";
  }
  return 0;
}
