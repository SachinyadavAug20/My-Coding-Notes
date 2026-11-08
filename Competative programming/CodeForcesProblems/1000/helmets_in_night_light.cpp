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
// need min 1 send from pak 
// use only resident whose price is less than pak and are cheaper

signed main() {
  fastio();
  int t;
  cin >> t;
  while (t--) {
    int n, p;
    cin >> n >> p;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    vector<pair<int, int>> residents(n);
    for (int i = 0; i < n; i++) {
      cin >> residents[i].first;
      residents[i].second = a[i];
    }
    sort(residents.begin(), residents.end());
    int total_cost = p;
    int remaining = n - 1;
    for (int i = 0; i < n && remaining > 0; i++) {
      if (residents[i].first >= p) {
        break;
      }
      int take = min(remaining, residents[i].second);
      total_cost += take * residents[i].first;
      remaining -= take;
    }
    total_cost += remaining * p;
    cout << total_cost << endl;
  }
  return 0;
}
