#include <bits/stdc++.h>
#include <fstream>
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
// *2 and /6
// divide will reduce the number but, can divide if divisible
// so, if not divisible and take 3 or more multiple by 2 to divide by 6 then
// Factorize: Count powers of 2 (c_2) and 3 (c_3) in n.
// Check Validity: If other prime factors exist or c_2 > c_3, output -1.
// if possible output 2*(c_3 - c_2)

signed main() {
  fastio();
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int c2 = 0, c3 = 0;

    while (n % 2 == 0) {
      c2++;
      n /= 2;
    }
    while (n % 3 == 0) {
      c3++;
      n /= 3;
    }

    if (n == 1 && c2 <= c3)
      cout << (2 * c3 - c2) << "\n";
    else
      cout << -1 << "\n";
  }
  return 0;
}
