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
// as in 1 move will remove 0,1 pair --> no of moves =min(no of 0s,no of 1s)
// the odd and even of move decide winner 

signed main() {
  fastio();
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int c0 = count(s.begin(), s.end(), '0');
    int c1 = count(s.begin(), s.end(), '1');

    int moves = min(c0, c1);

    if (moves % 2 != 0) {
      cout << "DA\n";
    } else {
      cout << "NET\n";
    }
  }
  return 0;
}
