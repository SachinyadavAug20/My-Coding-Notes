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
// delete cost 1 and swap any 2 is free => thus, order
// need to minimize cost and make result string t as t[i]!=s[i]
// need all swaped like 0 -> 1
// so,
// get count of 0 and 1 in s
// they travers s try to replace all 0 -> 1 and 1 -> 0
// till when doable

signed main() {
  fastio();
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int zc = 0, oc = 0;
    for (char ch : s) {
      if (ch == '1')
        oc++;
      else
        zc++;
    }

    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == '0') {
        if (oc > 0)
          oc--;
        else {
          ans = s.size() - i;
          break;
        }
      } else {
        if (zc > 0)
          zc--;
        else {
          ans = s.size() - i;
          break;
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}
