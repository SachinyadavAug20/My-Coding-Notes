// Unlock the Door
// Problem
//
// Our Friend Monk has finally found the Temple of Programming secrets. However, the door of the temple is firmly locked. Now, as per the rules of the temple, Monk needs to enter a Secret Password in a special language to unlock the door. This language, unlike English consists of K alphabets. The properties of this secret password are:
//
//     It has a length of N characters.
//
//     It is composed only of the K characters belonging to the Special language.
//
//     Each character belonging to the special language has been used at max once in the secret code.
//
// Now, Monk has no idea about what the ideal password may be and needs you help. You need to help Monk find the total number of distinct candidate Strings for it Modulo 1e9+7.
//
// Input Format:
//
// The first line contains a single integer T denoting the number of test cases. Each of the next T lines contain two integers N and K denoting the length of the Secret Password and the number of characters of the Special language to be used respectively.
//
// Output Format:
//
// For each test case, output the number of possible distinct secret passwords Modulo 1e9+7


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


const int M=1e9+7; //prime
const int N=1e5+10; // all fact till here
vector<int> f(N);

int main(int argn, char *argv[]) {
    f[0]=f[1]=1;
    for (int i=2; i<N; i++) {
        f[i]=(i*1LL*f[i-1])%M;
    }
    int t;
    cin>>t;
    while (t--) {
        ll n,k;
        cin>>n>>k;
        // no of combination of n letters from k characters = kpn = k!/((k-n)!)
        ll nr=f[k];
        ll dr=(f[k-n]);
        cout<<(nr%M*binExpo(dr, M-2, M)%M)%M<<endl;
    }  // O(t*log(n))
  return 0;
}

