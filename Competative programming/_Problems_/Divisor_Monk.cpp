// Problem
//
// Here is another task for you, prepared by Monk himself. So, this is how it goes :
//
// Given an integer array A of size N, Monk needs you to answer T queries for him. In each query, he gives you 2 integers P and Q. In response to each of these queries, you need to tell Monk the count of numbers in array A. that are either divisible by P, Q, or both.
//
// Can you cope with this ?
//
// Video approach to solve this question: here
//
// Input Format :
//
// The first line contains a single integer N denoting the size of array A. The next line contains N space separated integers, where the integer denotes .
//
// The next line contains a single integer T denoting the number of queries Monk poses to you. Each of the next T lines contains 2 space separated integers P and Q.
//
// Output Format :
//
// For each query, print the answer on a new line.
//
// Constraints :

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int binExpo(int a,int b,int m){
    int ans=1;
    while (b>0) {
        if (b&1) {
        ans=(ans*1LL*a)%m;
        }
        a=(a*1LL*a)%m;
        b=b>>1;
    }
    return ans;
}


void approach1(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int q;
    cin>>q;
    while (q--) {
        int p,q;
        cin>>p>>q;
        int cnt=0;
        for (int i=0; i<n; i++) {
            int num=arr[i];
            if ((num/p)*p==num) {
            cnt++;
            }
            else if((num/q)*q==num) {
            cnt++;
            }
        }
        cout<<cnt<<endl;
    }  //O(T*N) = O(n^2) = 10^10 not possible in 1s  ==> TLE
}
const int N=2e5+10;
vector<bool> isPrime(N,1);
vector<vector<int>> divisor(N);

int MYgcd(int m, int n){
    int divident=max(m,n);
    int divisor=min(m,n);
    if (divident%divisor==0) {
        return divisor;
    }
    return MYgcd(divisor, divident%divisor);
}  // worst case O(logn)

int main(int argn, char *argv[]) {
    isPrime[0]=isPrime[1]=0;
    for (int i=2; i<N; i++) {
            for (int j=2*i; j<N; j+=i) {
                isPrime[j]=0;
                divisor[j].push_back(i);
            }
        divisor[i].push_back(i);
    }// O(nlogn)
    
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    vector<int> disibleByindex(N,0);
    disibleByindex[0]=0;
    disibleByindex[1]=n;
    for (int i=0; i<n; i++) {
        for (int d  : divisor[arr[i]]) {
            disibleByindex[d]++;
        }
    }
    // printVect(disibleByindex);
    
    sort(arr.begin(),arr.end());
    // get all divsiors of all element
    

    int q;
    cin>>q;
    while (q--) {
        int p,q;
        cin>>p>>q;
        int cnt;
        cnt=disibleByindex[p]+ disibleByindex[q];
        if (p*1LL/MYgcd(p, q)*q<N) {
            cnt-= disibleByindex[p/MYgcd(p, q)*q];
        }  
        cout<<cnt<<endl;
    }
  return 0;
}
