#include <bits/stdc++.h>
#include <iostream>
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
  int a = 10, b = 20;
  printBinary(a);
  cout << a << " ^ " << a << " = " << (a ^ a) << endl; // 0 as same it gives 0
  cout << a << " ^ 0 = " << (a ^ 0) << endl;           // gives a
  cout << b << " ^ ( " << a << " ^ " << b << " ) =" << (b ^ (a ^ b)) << endl; // XOR is associative

  // now swaping
  printf("before swap a : %d and b : %d\n", a, b);
  a = a ^ b;
  b = b ^ a; // b = b ^ a = b ^ ( a ^ b ) = a thus b=a
  a = a ^ b; // a = ( a ^ b ) ^ b = b thus a=b
  printf("after swap a : %d and b : %d\n", a, b);
  return 0;
}
