#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e7 + 7;
vector<bool> isPrime(N,1);
vector<int> lp(N,0),hp(N,0);



unordered_map<int,int> primefac(int n){  // as map insert is O(logn) , unorder is O(1)
    unordered_map<int,int> ans;
    while (n>1) {
        ans[lp[n]]++;
        n/=lp[n];
    }
    return ans;
}

int main(int argn, char *argv[]) {
    isPrime[0]=isPrime[1]=0;
    lp[1]=hp[1]=1;
    for (int i=2; i<N; i++) {
        if (isPrime[i]) {
            lp[i]=hp[i]=i;  // for prime lp and hp is itself
            for (int j=2*i; j<N; j+=i) {
                if (isPrime[j]==1) {
                    lp[j]=i;
                }
                isPrime[j]=0;
                hp[j]=i;
            }
        }
    } // O(n*log(log(n)))
    for (int i=0; i<=10; i++) {
    cout<<i<<" is prime "<<isPrime[i]<<", lower prime factor : "<<lp[i]<<", highest prime factor is : "<<hp[i]<<endl;
    }
    int n;
    cin>>n;
    for (auto pr  : primefac(n)) {
        cout<<pr.first<<"^"<<pr.second<<" ";
    }
    cout<<endl;
  return 0;
}
