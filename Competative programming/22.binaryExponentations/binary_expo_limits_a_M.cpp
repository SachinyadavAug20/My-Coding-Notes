#include <bits/stdc++.h>
using namespace std;
#define ll long long

const ll M = 1e18 + 7;

// a<=10^18 , b<=10^9 , M<=10^18

ll binMul(ll a, ll b);
ll binExp(ll a, ll b) {
  a = a % M; // make a smaller by %M
  ll ans = 1;
  while (b > 0) {
    if (b & 1) {
      ans = binMul(ans , a);
    }
    a = binMul(a ,a) ;
    b = b >> 1;
  }
  return ans;
}
ll SimMul(int a, int b) {
  // repeated addition is mul
  int ans = 0;
  for (int i = 0; i < b; i++) {
    ans = (ans + a) % M;
  }
  return ans;
} // O(n)

ll binMul(ll a, ll b) {
  ll ans = 0;
  while (b >0) {
    if (b&1) {
            ans=(ans+a)%M;
    }
    a=(a+a)%M;
    b = b >> 1;
  }
  return ans;
} //O(logn)

int main(int argn, char *argv[]) {
  ll p, q;
  cin >> p >> q;
  cout << binExp(p, q) << endl;
  cout << SimMul(p, q) << endl;
  cout << binMul(p, q) << endl;
  return 0;
}

