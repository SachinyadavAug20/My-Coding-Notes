#include <bits/stdc++.h>
#include <vector>
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
// for x in 1,2n
// 1. Find the maximum consecutive length of x in array a (let's call it maxA[x]).
// 2. Find the maximum consecutive length of x in array b (let's call it maxB[x]).
// 3. The longest equal-value subarray of x in c will be maxA[x] + maxB[x]. The final answer is the maximum of this sum across all possible values of x.

signed main() {
  fastio();
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> b(n);
    for (int i = 0; i < n; i++) cin >> b[i];

    vector<int> maxA(2 * n + 1, 0), maxB(2 * n + 1, 0);
    int cnt = 1;
    maxA[a[0]] = 1;
    for (int i = 1; i < n; i++) {
      if (a[i] == a[i - 1]) {
        cnt++;
      } else {
        cnt = 1;
      }
      maxA[a[i]] = max(maxA[a[i]], cnt);
    }
    cnt = 1;
    maxB[b[0]] = 1;
    for (int i = 1; i < n; i++) {
      if (b[i] == b[i - 1]) {
        cnt++;
      } else {
        cnt = 1;
      }
      maxB[b[i]] = max(maxB[b[i]], cnt);
    }
    int ans = 0;
    for (int x = 1; x <= 2 * n; x++) {
      ans = max(ans, maxA[x] + maxB[x]);
    }
    cout << ans << endl;
  }
  return 0;
}
