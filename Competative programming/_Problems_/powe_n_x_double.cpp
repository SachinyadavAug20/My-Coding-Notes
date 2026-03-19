// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
//
//
//
// Example 1:
//
// Input: x = 2.00000, n = 10
// Output: 1024.00000
//
// Example 2:
//
// Input: x = 2.10000, n = 3
// Output: 9.26100
//
// Example 3:
//
// Input: x = 2.00000, n = -2
// Output: 0.25000
// Explanation: 2-2 = 1/22 = 1/4 = 0.25

#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <vector>
using namespace std;
#define ll long long

double myPow(double x, int n) {
    if (x==1) {
    return 1;
    }
  double ans = 1;
    unsigned b= abs(n);  // b= |n|
    // cout<<n<<"       "<<b<<endl;
    while (b > 0) {
      if (b & 1) {
        ans = ans * x;
      }
      x = x * x;
      b= b >> 1;
    }

    if (n>0) {
    return ans;
    }
    else {
    return 1/ans;
    }
}

int main(int argn, char *argv[]) {
  cout << myPow(2, 10) << endl;
  cout << myPow(2.1, 3) << endl;
  cout << myPow(2, -2) << endl;
  cout << myPow(1, -2147483648) << endl;

  return 0;
}

