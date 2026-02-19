// find factorial of N where, N<=100
//     answer in modula of 47

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, M = 47;
  cin >> n;
  long long int fact = 1;
  for (int i = 2; i <= n; i++) {
    fact = (fact * i) % M;
    
  }
  cout << fact << endl;
}
