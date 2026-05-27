// https://codeforces.com/problemset/problem/263/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argn, char *argv[]) {
  // as all zero and only 1 thus it is asking
  // no of moves to reach center for that 1
  int n = 5;
  int i1, j1, v;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> v;
      if (v == 1) {
        i1 = i;
        j1 = j;
        break;
      }
    }
  }
  cout << abs(i1 - 3) + abs(j1 - 3) << endl;
  return 0;
}
