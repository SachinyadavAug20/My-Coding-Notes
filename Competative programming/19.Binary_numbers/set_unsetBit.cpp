#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
using namespace std;
#define ll long long

void printBinary(int num) {
  for (int i = 15; i >= 0; --i) { // print for 16 bits
    cout << ((num >> i) & 1);
  }
  cout << endl;
}

int main(void) {
  printBinary(2);
  printBinary(4);
  printBinary(9);
  printBinary(11);

  int a, n;
  cin >> a >> n;

  printf("check if %d's %dth bit is set\n", a, n);
  printBinary(a);
  int checker = (1 << n);
  if ((checker & a) !=
      0) { // (checker&a)=false when unset and (checker&a)=true when set
    cout << "SET" << endl;
  } else {
    cout << "UNSET" << endl;
  }

  printf("\n\n");
  cin >> a >> n;

  printf("make %d's %dth bit is set we get\n", a, n);
  printBinary(a);
  checker = (1 << n);
  printf("ans :%d\n", (checker | a));
  printBinary((checker | a));
  printf("\n\n");

  printf("invert the binary\n");
  printBinary(64);
  printBinary(~64);
  printf("\n\n");

  cin >> a >> n;
  printf("make %d's %dth unbit is set we get\n", a, n);
  printBinary(a);
  checker = ~(1 << n);
  printf("ans :%d\n", (checker & a));
  printBinary((checker & a));

  printf("\n\n");
  cin >> a >> n;
  printf("toggle %d's %dth bit \n", a, n);
  printBinary(a);
  // WAY1: check if it set make it unset and if unset make it set
  if ((a & (1 << n)) != 0) { // it is set
    printBinary(a & (~(1 << n)));
  } else {
    printBinary(a | (1 << n));
  }
  // WAY2: use XOR-> gives 1 if different bit and 0 if same bit
  printBinary(a ^ (1 << n));

  printf("\n\n");
  cin >> a;
  printf("No of set bit in %d\n", a);
  printBinary(a);
  // Way 1 : loop to all bits
  int ctn = 0;
  for (int i = 0; i < 32; i++) { // as 32 bit integer
    if ((a & (1 << i)) != 0) {
      ctn++;
    }
  }
  printf("ctn : %d\n", ctn);
  // Way 2 : use built in function
  cout << __builtin_popcount(a) << endl;                 // only for integers
  cout << __builtin_popcountll((1LL << 35) - 1) << endl; // for ll int

  printf("\n\n");
  return 0;
}
