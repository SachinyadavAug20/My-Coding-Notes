// Alex has started hacking websites, and also started learning encryption and decryption of messages. Once he faced an interesting issue, where he needs to decrypt the message in a different way.
// Initially, he will be given an array A of N integers, and has to decrypt Q messages. In each message he will get an integer X, and if X can be converted into product of two different or same prime numbers, then the real message is "YES" (without quotes), otherwise the message is "NO" (without quotes).
//
// To convert X, he can choose one element from array say Y (X should be divisible Y), and can divide X by Y any number of times (till X is divisible by Y). Help Alex in decrypting the messages.
//
// Input Format:
//
// First line will contain an integer N and Q,, denoting the number of elements in the array and number of encrypted messages respectively.
//
// Next line will contain N space-separated integers representing the elements of the array.
//
// In next Q lines, each line will contain an integer X , representing an encrypted message.
//
// Output Format:
//
// For each encrypted message, output the decrypted message in new line. 

#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e6 + 10;
vector<bool> isPrime(N, 1);
vector<int> hp(N, 0);

vector<int> distinctPrime(int n) {
  vector<int> ans;
  while (n > 1) {
    int pf = hp[n];
    ans.push_back(pf);
    while (n % pf == 0)
      n /= pf;
  }
  return ans;
}

int main(int argn, char *argv[]) {
  // prep
  isPrime[0] = isPrime[1] = 0;
  hp[0] = hp[1] = 1;
  for (int i = 2; i < N; i++) {
    if (hp[i] == 0) { // i.e is prime
      for (int j = i; j < N; j += i) {
        isPrime[j] = 0;
        hp[j] = i;
      }
    }
  }

  int n, q;
  cin >> n >> q;
  vector<int> arr(n);
  vector<bool> removeAbleByArray(N, 0);
  vector<bool> hsh(N, 0);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
        hsh[arr[i]]=1;
  }
    removeAbleByArray[1]=1;
    for (int i=2; i<N; i++) {
        if (hsh[i]) {
            for (ll j=i; j<N; j*=i) {
                removeAbleByArray[j]=1;
            }
        }
    }
  // printVect(arr);
  while (q--) {
    int num, isdone = 0;
    cin >> num;
    vector<int> distinctprime = distinctPrime(num);
    int sz = distinctprime.size();
    for (int i = 0; i < sz; i++) {
      for (int j = i; j < sz; j++) {
        int prt= distinctprime[j]*distinctprime[i];
        if (i == j && num %prt!=0) continue;
        int toremove=num/prt;
          if (removeAbleByArray[toremove]) {
            isdone = 1;
          }
          if (isdone) break;
      }
        if (isdone) break;
    }
    cout<<(isdone?"YES":"NO")<<endl;
  } // O(q*100*log100) = 10^8  --> possible in 1 second 
  return 0;
}
