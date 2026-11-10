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
  cin>>t;
  while (t--) {
    int n;
    long long k;
    cin >> n >> k;
    vector<pair<long long, int>> monsters(n);
    for (int i = 0; i < n; ++i) {
      long long a;
      cin >> a;
      long long rem = a % k;
      if (rem == 0) rem = k;
      monsters[i] = {rem, i + 1};
    }

    sort(monsters.begin(), monsters.end(),
         [](const pair<long long, int> &A, const pair<long long, int> &B) {
           if (A.first != B.first) {
             return A.first > B.first;
           }
           return A.second < B.second;
         });

    for (int i = 0; i < n; ++i) {
      cout << monsters[i].second << (i + 1 == n ? "" : " ");
    }
    cout << endl;
  }
  return 0;
}
