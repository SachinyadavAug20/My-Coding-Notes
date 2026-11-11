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

    int n, k, q;
    cin >> n >> k >> q;
    vector<int> weather(n);
    for (int i = 0; i < n; i++) {
      cin >> weather[i];
    }
    int ans = 0;
    int len = 0; 
    for (int i = 0; i < n; i++) {
      if (weather[i] <= q) {
        len++;
      } else {
        if (len >= k) {
          int count = len - k + 1;// all possible starting days for k day fac
          ans += (count * (count + 1)) / 2;
        }
        len = 0;
      }
    }
    if (len >= k) {
      int count = len - k + 1;
      ans += (count * (count + 1)) / 2;
    }
    cout << ans << endl;
  }
  return 0;
}
