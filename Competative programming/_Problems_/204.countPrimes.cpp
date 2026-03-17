// Given an integer n, return the number of prime numbers that are strictly less than n.
//
//
//
// Example 1:
//
// Input: n = 10
// Output: 4
// Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
//
// Example 2:
//
// Input: n = 0
// Output: 0
//
// Example 3:
//
// Input: n = 1
// Output: 0


#include <bits/stdc++.h>
using namespace std;
#define ll long long


int countPrimes(int n) {
    vector<bool> isprime(n+10,1);
    isprime[0]=isprime[1]=0;
    int ctn=0;
    for (int i=2; i<n; i++) {
        if (isprime[i]) {
                ctn++;
                for (int j=2*i; j<n; j+=i) {
                isprime[j]=0;
            }
        }
    }
    return ctn;
}

int main(int argn, char *argv[]) {
    cout<<countPrimes(10)<<endl;
    cout<<countPrimes(0)<<endl;

    cout<<countPrimes(3)<<endl;
    cout<<countPrimes(2)<<endl;
    cout<<countPrimes(1)<<endl;
    cout<<countPrimes(205922)<<endl;
  return 0;
}
