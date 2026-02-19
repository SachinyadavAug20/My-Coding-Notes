#include <algorithm>
#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>
#include <iostream>
#define ll long long
using namespace std;

void printVec(vector<int> a) {
  for (auto pr : a) {
    cout << pr << " ";
  }
  cout << endl;
}

int sqrtMY(int n) {
  int x; // it will be squr of n
  int lo = 1, hi = n;
  while (hi - lo > 1) {
    int midd = (hi + lo) / 2;
    if (midd * midd < n) {
      lo = midd + 1;
    } else {
      hi = midd;
    }
  }
  if (lo * lo == n) {
    x = lo;
  } else if (hi * hi == n) {
    x = hi;
  } else {
    x = lo; // take round down
  }
  return x;
}

int cqrtMY(int n) {
  int x; // it will be cube root of n
  int lo = 1, hi = n;
  while (hi - lo > 1) {
    int midd = (hi + lo) / 2;
    if (midd * midd * midd < n) {
      lo = midd + 1;
    } else {
      hi = midd;
    }
  }
  if (lo * lo * lo == n) {
    x = lo;
  } else if (hi * hi * hi == n) {
    x = hi;
  } else {
    x = lo; // take round down
  }
  return x;
}

double multiply(double num, int n) {
  if (n == 0) {
    return 1;
  }
  return num * multiply(num, n - 1);
}

double eps = 1e-6;
int main() {
  cout << sqrtMY(64) << endl;
  cout << cqrtMY(64) << endl;

  // SIR
  double a;
  int n;
  cin >> a >> n;
  double lo = 1, hi = a, midd;
  while (hi - lo > eps) {
    midd = (hi + lo) / 2;
    if (multiply(midd, n) < a) {
      lo = midd;
    } else {
      hi = midd;
    }
  }
  // Log(n*10^d) ==> Log(n*10^d) size of search
  // for nth root as O(Nlog(10^d)) as multiplication fn
  cout << setprecision(6) << lo << endl; // both hi and lo are nerally equal
  cout << "control" << pow(a, 1.0 / n);
}
