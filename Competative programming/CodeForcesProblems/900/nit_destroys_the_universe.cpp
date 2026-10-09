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
// only 3 cases possible
// Answer = 0: All elements are already $0$.
// Answer = 1: All non-zero elements form a single contiguous block (e.g., 0 2 3
// 5 0). You can select that block directly and turn it to $0$. Answer = 2:
// There are 2 or more separate blocks of non-zero elements separated by zeros
// (e.g., 2 3 0 1 2 0).

signed main() {
  fastio();
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }

    int segments = 0;
    for (int i = 0; i < n; i++) {
      if (v[i] > 0 && (i == 0 || v[i - 1] == 0)) {
        segments++;
      }
    }

    if (segments == 0) {
      cout << 0 << "\n";
    } else if (segments == 1) {
      cout << 1 << "\n";
    } else {
      cout << 2 << "\n";
    }
  }
  return 0;
}
