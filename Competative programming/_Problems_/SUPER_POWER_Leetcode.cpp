// Your task is to calculate ab mod 1337 where a is a positive integer and b is an extremely large positive integer given in the form of an array.
//
//
//
// Example 1:
//
// Input: a = 2, b = [3]
// Output: 8
//
// Example 2:
//
// Input: a = 2, b = [1,0]
// Output: 1024
//
// Example 3:
//
// Input: a = 1, b = [4,3,3,8,5,2]
// Output: 1
//


#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

const int M = 1337;

int binPow(int a, ll b, int m) {
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

int superPow(int a, vector<int> &b) {
  // b is in base 10
  int ans;

  int Bigb = 0;
  int ETFn = ETF(M);
  if (M % a != 0) {   // condition of euler theorm

    int no_of_digts = b.size();
    int fac = 1;
    for (int i = no_of_digts - 1; i >= 0; i--) {
      Bigb = (Bigb + fac * b[i]) % ETFn;
      fac = (fac * 10) % ETFn;
    }
    // cout<<Bigb<<endl;
    ans = binPow(a, Bigb, M);
  }

  else {  // fall back if euler theorm not applicatble
    // Do step wise expo
    int no_of_digts = b.size();
    int fac = 1;
    ans = 1;
    for (int i = no_of_digts - 1; i >= 0; i--) {
      int num = (fac * b[i]) % ETFn;
      ans = (ans * binPow(a, num, M)) % M;
      fac = (fac * 10);
    }
  }
  return ans;
}

int main(int argn, char *argv[]) {
  int t;
  cin >> t;
  while (t--) {
    int a, n;
    cin >> a >> n;
    vector<int> b;
    while (n--) {
      int f;
      cin >> f;
      b.push_back(f);
    }
    cout << superPow(a, b) << endl;
  }
  return 0;
}
