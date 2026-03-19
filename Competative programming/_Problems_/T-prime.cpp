//                          T-primes
// time limit per test
// 2 seconds
// memory limit per test
// 256 megabytes
//
// We know that prime numbers are positive integers that have exactly two distinct positive divisors. Similarly, we'll call a positive integer t Т-prime, if t has exactly three distinct positive divisors.
//
// You are given an array of n positive integers. For each of them determine whether it is Т-prime or not.
// Input
//
// The first line contains a single positive integer, n (1 ≤ n ≤ 105), showing how many numbers are in the array. The next line contains n space-separated integers xi (1 ≤ xi ≤ 1012).
//
// Please, do not use the %lld specifier to read or write 64-bit integers in С++. It is advised to use the cin, cout streams or the %I64d specifier.
// Output
//
// Print n lines: the i-th line should contain "YES" (without the quotes), if number xi is Т-prime, and "NO" (without the quotes), if it isn't.


#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long

void printVect(vector<int> a);
void printprimefactors(vector<pair<int, int>> a);
void printVect2D(vector<pair<pair<int, int>, pair<int, int>>> a);
void printVectSS(vector<pair<pair<int, int>, int>> a);

const int N = 1e6 + 10;

int MYsqrt(int a ){
    int ans;
    int hi=a,lo=0;
    while (hi-lo>1) {
        int midd=(hi+lo)/2;
        if (midd*midd<a) {
        lo=midd;
        }
        else {
        hi=midd;
        }
    }
    if (hi*hi==a)
    {
return hi;
    }
    if (lo*lo<=a) {
    ans=lo;
    }
    else {
    ans=hi;
    }
    return ans;
}
vector<int> isPrime(N,1);

int main(int argn, char *argv[]) {
    isPrime[0]=isPrime[1]=0;
    for (int i=2; i<N; i++) {
        if (isPrime[i]) {
            for (int j=2*i; j<N; j+=i) {
                isPrime[j]=0;
            }
        }
    }

    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int srt=MYsqrt(n);
        if (srt*srt==n) {
            // check if srt is prime
            if (isPrime[srt]) {
            cout<<"YES"<<endl;
            }else{
              cout<<"NO"<<endl;
            }
        }
        else {
            cout<<"NO"<<endl;
        }
    }
  return 0;
}
