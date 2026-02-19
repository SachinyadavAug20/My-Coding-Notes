
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int S = 1e7 + 10;
int hsh[S];

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  // try pre-computing
  for (int i = 0; i < n; i++) {
    hsh[a[i]]++;
  }

  int q;
  cin >> q;
  while (q--) {
    int x;
    cin >> x;
    // int ct = 0;
    // for (int i = 0; i < n; i++) {
    //   if (a[i] == x) {
    //     ct++;
    //   }
    // }
    // cout << ct << endl;
    cout << hsh[x] << endl;
  }
}
