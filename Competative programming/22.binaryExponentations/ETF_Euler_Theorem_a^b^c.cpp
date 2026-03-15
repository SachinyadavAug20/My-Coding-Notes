#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int M = 1e9 + 7;

// b>10^18 will works as 32 bit happend in 32 times and greater

int binPow(int a, ll b,int m) {
  int ans = 1;
  while (b > 0) {
    if (b & 1) {
      ans = (ans * 1LL * a) % m;
    }
    a = (a * 1LL * a) % m;
    b = b >> 1;
  }
  return (int)ans;
}

int ETF(int x) {
  // It is no of coprime pairs formed of x with number 1 to x
  // formula is xΠ(1-1/p) where p are distinct primes factors of x
  int ans = x;
  set<int> factorPrimeX;
  int temp = x;
  for (int i = 2; i * i < temp; i++) {
    if (x % i == 0) {
      factorPrimeX.insert(i);
      while (x % i == 0) {
        x /= i;
      }
    }
  }
  if (x > 1) {
    factorPrimeX.insert(x);
  }
  for (int num : factorPrimeX) {
    ans *= (num - 1);
  }
  for (int num : factorPrimeX) {
    ans /= num;
  }
  return ans;
}
int main(int argn, char *argv[]) {
  // Make 50^64^32
  int a, b, c;
  cin >> a >> b >> c;
  cout << binPow(a, binPow(b, c,M),M) << endl; // gives wrong answer as (a^b^c)%M != (a%m)^(b^c)%M Use euler theorm and ETF to do that
  cout << ETF(5) << endl;
  cout << ETF(6) << endl;
  cout << ETF(12) << endl;
  cout << ETF(M) << endl;
  cout<<M<<endl;
  cout << binPow(a, binPow(b, c,M-1),M)<<endl;
  return 0;
}

