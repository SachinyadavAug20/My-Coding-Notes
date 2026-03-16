#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int M = 1e9 + 7;

// Q < 10^7 , N < 10^7 ==> O(n*sqrt(n))= not possible by check prime
// use slive algo to compute all primes before-hand

const int N = 1e7 + 10;     // find all prime till here
vector<bool> isprime(N, 1); // all prime intially

int main(int argn, char *argv[]) {
  isprime[0] = isprime[1] = 0;
  for (int i = 2; i < N; i++) {
    if (isprime[i]) {
      for (int j = 2 * i; j < N; j += i) { // all multiple falls
        isprime[j] = 0;
      }
    }
  }  // O(nlog(log(n))) == O(sqrt(n)log(log(n))) == O(sqrt(n)log(log(sqrt(n))))

  int q;
  cin >> q;
  if (q == 0) {
    for (int i = 0; i <= 100; i++) {
      cout << i << " prime : " << isprime[i] << endl;
    }
  }
  while (q--) {
    int n;
    cin >> n;
        if (isprime[n]) {
        cout<<"Prime"<<endl;
        } else {
        cout<<"Not Prime"<<endl;
        }
  }
  return 0;
}
