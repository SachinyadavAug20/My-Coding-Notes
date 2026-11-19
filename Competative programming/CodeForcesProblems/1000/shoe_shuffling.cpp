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

/*
   obs
Since the sizes are sorted, any student with a unique shoe size would force
someone to take a smaller size or keep their own, making it impossible (-1).
Group identical consecutive sizes together and cyclically shift their 1-based
indices by one position so everyone gets an equal size from someone else
 */

void solve() {
  int n;
  cin >> n;
  vector<int> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  vector<int> p(n);
  for (int i = 0; i < n;) {
    int j = i;
    while (j < n && s[j] == s[i]) {
      j++;
    }

    if (j - i == 1) {
      cout << -1 << endl;
      return;
    }

    for (int k = i; k < j - 1; k++) {
      p[k] = k + 2;
    }
    p[j - 1] = i + 1;

    i = j;
  }

  for (int i = 0; i < n; i++) {
    cout << p[i] << (i == n - 1 ? "" : " ");
  }
  cout << endl;
}

signed main() {
  fastio();
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
