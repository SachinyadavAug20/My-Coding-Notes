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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int c0 = 0, c1 = 0;
    for (char c : s) {
      if (c == '0')
        c0++;
      else
        c1++;
    }
    int mx = min(n, max(c0, c1) + k);
    int rem = n - mx;
    int ans = 1 + (mx * (mx + 1)) / 2 + (rem * (rem + 1)) / 2;
    cout << ans << "\n";
  }
  return 0;
}
