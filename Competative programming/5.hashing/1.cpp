/*
Given an integer N. Given Q queries and in each query in each query a number X,
print count of that number in array constraint: N<=10^5 a[i]<=10^7 Q<=10^5

*/

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
// O(N)+O(Q*N) == O(N^2) = 10^10 iteration won't run in 1s
// O(N)+O(Q) == O(N)==2*10^5(worst case) can compute in 1s
