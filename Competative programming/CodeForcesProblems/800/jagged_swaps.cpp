#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
// obs
// 1) if already sorted -> YES
// 2) only position 0 is problem as other is doable
//

int main() {
  int q;
  cin >> q;
  while (q--) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    if (arr[0] == 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
