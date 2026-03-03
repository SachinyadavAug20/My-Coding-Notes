// Given array a of n integers. All integers appear even number of time expect
// one find that one intger which appear odd number of times in time O(N) and
// space O(1) n<10^5 a[i]<10^5

#include <bits/stdc++.h>
using namespace std;
#define ll long long

// print binary
void printBinary(int num) {
  for (int i = 31; i >= 0; i--) {
    cout << ((num >> i) & 1);
  }
  cout << endl;
}

int main(int argn, char *argv[]) {
  int n, ans = 0;
  cin >> n;
  // map<int, int> nums;   hash array make O(n) space need O(1) space
  for (int i = 0; i < n; i++) {
    int jj;
    cin >> jj;

    // use XOR on all numbers even will cancel out and only 1(given only 1 appears odd number of times) odd will remain==>
    // a ^ a = 0
    // a ^ 0 = a
    ans = ans ^ jj;
  }
  cout << ans;
  return 0;
}
