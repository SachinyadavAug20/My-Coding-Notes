// Read problems statements in Mandarin Chinese and Russian.
// You are given an array A of integers of size N. You will be given Q queries where each query is represented by two integers L, R. You have to find the gcd(Greate Common Divisor) of the array after excluding the part from range L to R inclusive (1 Based indexing). You are guaranteed that after excluding the part of the array remaining array is non empty.
// Input
// • First line of input contains an integer T denoting number of test cases.
// ⚫ For each test case, first line will contain two space separated integers N, Q. 
// • Next line contains N space separated integers denoting array A.
// For next Q lines, each line will contain a query denoted by two space separated integers L, R.
// Output
// For each query, print a single integer representing the answer of that query.

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
    int n,q;
    cin>>n>>q;
    int arr[n+10];
    int forward[n+10];
    int backward[n+10];
    forward[0]=backward[n+1]=0;
    for (int i = 1; i <= n; ++i)
    {
      cin>>arr[i];
    }
    for (int i = 1; i <= n; ++i)
    {
      forward[i]=__gcd(forward[i-1],arr[i]);
    }
    for (int i = n; i >= 1; --i)
    {
      backward[i]=__gcd(backward[i+1],arr[i]);
    }
    while(q--){
    int l,r;
    cin>>l>>r;
    // int gc=0;
    // for (int i = 1; i <= l-1; ++i)
    // {
    //   gc=__gcd(gc,arr[i]);
    // }
    // for (int i = r+1; i <= n; ++i)
    // {
    //   gc=__gcd(gc,arr[i]);
    // }
    cout<<__gcd(forward[l-1],backward[r+1])<<endl;
    }
  }
}
// O(t*(n+q(n))) == O(n^3) == 10^12 iterations it won't run in 1s === TLE
// O(t*(n+n+n+q) == O(n^2) == 10^6 iterations it run in 1s === optimized
// sum of all elements will be less than 10^6

