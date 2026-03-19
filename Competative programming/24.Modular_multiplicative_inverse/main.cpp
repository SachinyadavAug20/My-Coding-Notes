#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int binexpo(int a,int b,int m){
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

// There are N children and K toffees. K < N
// Count the number of ways to distribute toffee among N students such that each students get
// 1 toffee only. take modulo M=10^6+7
// N< 10 ^ 6 , K < N < 10 ^ 6
// Q < 10 ^ 5
// nCk = n! / ((n-k)! * k!) 

const int M=1e9+7;
const int N=1e6+7;
vector<int> fact(M);

int main(int argn, char *argv[]) {
    // Modular Mutiplicative inverse of 
    int x;
    cin>>x;  // find MMI of a
    cout<<binexpo(x, M-2, M)<<endl;
    cout<<(x*binexpo(x, M-2, M))%M<<endl;

    // Solution
    int q;
    cin>>q;
    fact[0]=fact[1]=1;
    for (int i=2; i<N; i++) {
        fact[i]=(fact[i-1]*1LL*i)%M;
    }

    while (q--) {
    
    int n,k;
    cin>>n>>k;
    int a=fact[n];
    int b=(fact[n-k]*fact[k])%M;
    cout<<(a*1LL*binexpo(b, M-2, M))%M<<endl;
    }

    return 0;
}
