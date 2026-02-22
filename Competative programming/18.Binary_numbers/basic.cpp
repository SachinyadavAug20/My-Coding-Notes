#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(void) {
  // left and right shift
  cout << (3 << 1) << endl;
  cout << (3 << 2) << endl;
  cout << (3 >> 1) << endl;
  cout << (3 >> 2) << endl;
  cout << (6 >> 2) << endl;

  cout << INT_MAX << " " << INT_MIN << endl;
  // int m=(1<<31)-1; // error as 1<<32 is 33 bit long so make 1 long long
  cout << (1LL << 32) - 1 << endl << (1LL << 31) - 1 << endl;
  cout << "This signed 32 bit integer so range is (-2^31 to +2^31-1)\n";
  unsigned int b = (1LL << 32) - 1;
  cout << "This unsigned 32 bit integer so range is (0 to +2^32-1)\n";
  cout << b << endl;
  return 0;
}
