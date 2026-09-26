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
// for 1 to 10 -> 9 round number
// for 10 to 99 -> 9 round numer
// for 100 to 999 -> 9 round number
// for 1000 to 9999 -> 9 round number
// for 10000 to 99999 -> 9 round number
// for 100000 to 999999 -> 9 round number
//
//

signed main() {
  fastio();
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int full_magnitudes = s.size() - 1;
    int leading_digit = s[0] - '0';
    int ans = (full_magnitudes * 9) + leading_digit;
    cout << ans << endl;
  }
  return 0;
}
