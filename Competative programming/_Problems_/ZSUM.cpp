//For two given integers n and k find (Zn + Zn-1 - 2Zn-2) mod 10000007, where Zn = Sn + Pn and Sn = 1k + 2k + 3k + … + nk and Pn = 11 + 22 + 33 + … + nn.
// Input
//
// There are several test cases (≤ 10000). In each case two space separated positive integers n and k are given.
// For last test case n and k are given as 0 0, which is not to be processed.
// Constraints
//
// 1 < n < 200000000
// 0 < k < 1000000
// Output
//
// For each case print the asked value in separate line.

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll M = 1e7 + 7;

void printVect(vector<int> a);
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a);
void printVectSS(vector<pair<pair<int, int>, int>> a);

int binPow(int a, int b) {
  int ans = 1;
  while (b > 0) {
    if (b & 1) {
      ans = (ans * 1LL * a) % M;
    }
    a = (a * 1LL * a) % M;
    b = b >> 1;
  }
  return ans;
}

ll S(ll n, ll k) {
  ll ans = 0;
  for (int i = 1; i <= n; i++) {
    ans = (ans + binPow(i, k)) % M;
  }
  return ans;
}

ll P(ll n) {
  ll ans = 0;
  for (int i = 1; i <= n; i++) {
    ans += binPow(i, i);
  }
  return ans;
}
ll Z(ll n, ll k) {
  ll ans = S(n, k) + P(n);
  return ans;
}

// (Zn + Zn-1 - 2Zn-2) == n^k+n^n+2*n-1^k+2*n-1^n-1

int main(int argn, char *argv[]) {
  // cout << binPow(11, 2)<<endl;
  // cout << binPow(2,10)<<endl;
  for (;;) {
    int n, k;
    cin >> n >> k;
    if (n == 0 && k == 0) {
      break;
    }
        int ans = 0;
ans = (ans + binPow(n, k)) % M;
ans = (ans + 2*binPow(n-1, k)) % M;
ans = (ans + binPow(n, n)) % M;
ans = (ans + 2*binPow(n-1, n-1)) % M;
    cout << ans << endl;
  }
  return 0;
}

