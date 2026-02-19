/*
Given T test cases find factorial of N. answer in modulo % M where, M=10^9+7
constrait:
T<=10^5
N<=10^5
*/
#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;
const int N = 1e5 + 5;
long long int fact[N];

int main() {
  // precomputing all factorials in advance
  fact[0] = fact[1] = 1;
  for (int i = 2; i <= N; i++) {
    fact[i] = i * fact[i - 1];
  }

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    cout << fact[n] << endl;
  }
}
// Old: O(n*t) = O(n^2) = 10^10 iteration in most case can't complete in 1s
// New: O(N) + O(T) = 10^5 + 10^5 == 10^5 less complex will run in 1s
