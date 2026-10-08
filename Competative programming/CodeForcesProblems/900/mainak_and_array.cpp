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
//
// try 1 (bad as forgot full rotation)
// need to max -> an - a1
// will try to have min at a[1] and max at a[n]
// can do 1 operation so choose btw which is accive able
// find pos of min and max element for it => 2 possiblity in 1 operation
// do both find max
//
// try 2
// if adjustant will be able to do max => find max diff btw adjust for it
//
// this are 2 cases 
// 1. keep a[1] constant and try all a[i] | keep a[n] contant and try all a[i] (for all possible internal subsequene rotation)
// 2. full array rotation all adjuatnt in order
//

signed main() {
  fastio();
  int t;
  cin >> t;
  while (t--) {

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int max_diff = a[n - 1] - a[0];

    // Case 1:
    for (int i = 0; i < n - 1; i++) {
      max_diff = max(max_diff, a[n - 1] - a[i]);
    }

    for (int i = 1; i < n; i++) {
      max_diff = max(max_diff, a[i] - a[0]);
    }

    // Case 2: 
    for (int i = 1; i < n; i++) {
      max_diff = max(max_diff, a[i - 1] - a[i]);
    }

    cout << max_diff << endl;
  }
  return 0;
}
