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
// from a position -> knight can be at 8 position to attack it
// so, valid position is intersection of btw 8 positon to attack king and queen
// We need the intersection of the two sets. => of 8 position each
//

signed main() {
  vector<pair<int, int>> v = {{1, 1}, {1, -1}, {-1, -1}, {-1, 1}};
  fastio();
  int t;
  cin >> t;
  while (t--) {
    int a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;
    set<pair<int, int>> pk, pq;
    for (auto p : v) {
      pk.insert({xk + p.first * a, yk + p.second * b});
      pk.insert({xk + p.first * b, yk + p.second * a});

      pq.insert({xq + p.first * a, yq + p.second * b});
      pq.insert({xq + p.first * b, yq + p.second * a});
    }
    int ans = 0;
    for (auto pos : pk) {
      if (pq.count(pos)) ans++;
    }

    cout << ans << endl;
  }
  return 0;
}
