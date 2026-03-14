#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long

const int M = 1337;

void printVect(vector<int> a);
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a);
void printVectSS(vector<pair<pair<int, int>, int>> a);

// b>10^18 will works as 32 bit happend in 32 times and greater

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

void printVect(vector<int> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << "(" << a[i].first.first << "," << a[i].first.second << ") " << "("
         << a[i].second.first << "," << a[i].second.second << ") " << endl;
  }
}
void printVectSS(vector<pair<pair<int, int>, int>> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << a[i].first.first << " " << a[i].first.second << " > " << a[i].second
         << endl;
  }
}
