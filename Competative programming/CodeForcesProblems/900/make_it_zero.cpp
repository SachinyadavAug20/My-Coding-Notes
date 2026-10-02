#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long

// obs
// xor properties -> 0^a=a , a^a=0
// can use l to r xor atmost 8 times
// find sequence of operation after which all zero
/*
### Explanation in 5 points

 1. **Even-length segment property:**\
    If we apply the operation on a segment of even length, all its elements
become the same value `x` (the XOR of the segment).
2. **Apply it twice:**\
    Applying the same operation again gives `x ⊕ x ⊕ ... ⊕ x = 0` because `x`
appears an even number of times. Thus, the whole segment becomes `0`.
3. **If `n` is even:**\
    The entire array has even length, so simply perform `[1,n]` **twice**. This
makes the whole array zero in 2 operations.
4. **If `n` is odd:**\
    `n-1` is even. First perform `[1,n-1]` twice, making positions `1...n-1`
zero. Then perform `[2,n]` twice, making positions `2...n` zero.
5. **Operations limit:**\
    We use at most **4 operations**, which is within the allowed limit of **8**.
The actual array values are not needed; only whether `n` is even or odd matters.
 */

void solve() {
  int n;
  cin >> n;

  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
  }

  if (n % 2 == 0) {
    cout << 2 << '\n';
    cout << 1 << ' ' << n << '\n';
    cout << 1 << ' ' << n << '\n';
  } else {
    cout << 4 << '\n';
    cout << 1 << ' ' << n - 1 << '\n';
    cout << 1 << ' ' << n - 1 << '\n';
    cout << 2 << ' ' << n << '\n';
    cout << 2 << ' ' << n << '\n';
  }
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
