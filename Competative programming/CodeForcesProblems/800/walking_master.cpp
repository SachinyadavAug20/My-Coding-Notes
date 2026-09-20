#include <bits/stdc++.h>
using namespace std;

#define fastio() (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr))
#define endl '\n'

// obs
// k = d - b;          // required diagonal moves
// x = a + k;          // maximum x after reaching y = d
// answer = k + x - c; // diagonal + left moves

signed main() {
  fastio();

  int t;
  cin >> t;

  while (t--) {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if (d < b) {
      cout << -1 << endl;
      continue;
    }
    long long k = d - b;
    if (c > a + k) { // line constrain
      cout << -1 << endl;
      continue;
    }
    long long ans = k + (a + k - c);
    cout << ans << endl;
  }

  return 0;
}
