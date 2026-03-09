// (22 ^ 22)%1e9+7 = 75695545
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int M=1e9+7;

ll Binary_expo(ll a, ll b) {

  if (b == 0)  return 1;  // base cond

  // if (b & 1) { // can do b%2 != 0
  // return a * Binary_expo(a, (b - 1) / 2) * Binary_expo(a, (b - 1) / 2);
  // }else {
  //   return Binary_expo(a, b / 2) * Binary_expo(a, b / 2);
  // }
  // problem many call so not O(log n)  it is same call many times => (b-1)/2==b/2 as b is odd

  ll factor = Binary_expo(a, b / 2);
  if (b & 1) { // can do b%2 != 0
    return (a * (factor * factor)%M)%M;
  } else {
    return (factor * factor)%M;
  }
}

int main(int argn, char *argv[]) {
  int x;
  cin >> x;
  cout << (1 << x) << endl;
  cout << pow(2, x) << endl;
  double a = 1e+24;
  cout << a - 1 << "   a-1 give a ==> presecsion error" << endl;
  cout << fixed << a + 1000 << "   a-1 give a ==> presecsion error" << endl;
  cout << fixed << setprecision(2) << a - 10000000
       << "   a-1 give a ==> presecsion error" << endl;

  printf("\n############################\n\n");
  printf("Binary exponentation\n");
  int a1 = 2, b1 = 13, ans = 1;
  for (int i = 0; i < 13; i++) {
    ans *= a1;
  }
  cout << a1 << " ^ " << b1 << " = " << ans << endl;

  // optimize ways : divide and conqur
  ll p, q;
  cin >> p >> q;
  cout << p << " ^ " << q << " = " << Binary_expo(p, q) << endl;

  return 0;
}
