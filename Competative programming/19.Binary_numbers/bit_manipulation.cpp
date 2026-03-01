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

int main(void) {
  int a, b;
  printBinary(1);
  cout << "\n\n";
  cin >> a;
  cout << a
       << " :odd or even checker\n"; // bit way is faster than n%2==0 operation
  if ((a & (1 << 0)) !=
      0) { // check if 0th bit is set -> it is set only in odd numbers
    cout << "Odd number\n";
  } else {
    cout << "Even number\n";
  }
  // As a *,/ and % are slower than the bit manipulation so use it
  cin >> a;
  cout << a << " :Multiply and divide by 2" << endl;
  printBinary(a);
  printBinary((a >> 1));
  cout << "Divide :" << (a >> 1) << endl;
  printBinary((a << 1));
  cout << "Multiply :" << (a << 1) << endl;
  cout << "\n\n";

  cout << "UpperCase to lower case and vice verse\n";
  for (char c = 'A'; c <= 'E'; c++) {
    printBinary(c);
  }
  cout << endl;
  for (char c = 'a'; c <= 'e'; c++) {
    printBinary(c);
  }
  // 5th bit is deciding for capital and small
  char ch1, ch2, ch3;
  cin >> ch1 >> ch2 >> ch3;
  // ch1->small and ch2->captial and ch3 can be anything
  cout << "Cap :" << ch1 << " is " << (char)(ch1 & (~(1 << 5))) << endl;
  cout << "Sma :" << ch2 << " is " << (char)(ch2 | (1 << 5)) << endl;
  cout << "Togg :" << ch3 << " is " << (char)(ch3 ^ ((' '))) << endl;
  cout << char(1 << 5) << endl;        // it is space character can use it
  cout << char(('c') & ('_')) << endl; // also can use "_"->1011111
  cout << char(('G') | (' ')) << endl;
  // here magical number is 1<<5 ->
  cout << "\n\n";

  cout << "Clear till nth LSBs\n";
  int num = 59;
  cin >> a;
  printBinary(num);
  printf("clearing all bits till %dth bit\n", a);
  // WAY 1 :loop
  for (int i = a; i >= 0; i--) {
    num = num & (~(1 << i));
  }
  printBinary(num);
  // WAY 2:
  cout << endl;
  num = 59;
  printBinary(num);
  printBinary(num & (~((1 << (a + 1)) - 1)));
  cout << "\n\n";

  cout << "Clear till nth MSBs\n";
  num = 59;
  cin >> a;
  printBinary(num);
  printf("clearing all bits after %dth bit\n", a);
  // WAY 1 :loop
  for (int i = a; i < 32; i++) {
    num = num & (~(1 << i));
  }
  printBinary(num);
  num = 59;
  // WAY 2:
  printBinary(num & ((1 << (a)) - 1));
  printf("\n\n");

  int n;
  cin >> n;
  printf("Check if given(%d) number is power of 2\n", n);
  printBinary(n);
  if ((n & (n - 1)) == 0) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  return 0;
}
// SAMPLE INPUT
// 12
// 13
// j K F
// 4
// 4
// 256
