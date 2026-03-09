#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int M=1e9+7;

int iterative_expo(int a,int b){
    int ans=1;
    while (b>0) {
        if(b&1){
            ans=ans*a;
        }
        a=a*a;
        b=b>>1;
    }
    return ans;
}
int iterative_expoMODULO(int a,int b){
    int ans=1;
    while (b>0) {
        if(b&1){
            ans=(ans*1LL*a)%M;
        }
        a=(a*1LL*a)%M;
        b=b>>1;
    }
    return ans;
}

int main(int argn, char *argv[]) {
    // iterative method
    // faster than recursive
    int p,q;
    cin>>p>>q;
    cout<<p<<"^"<<q<<" = "<<iterative_expo(p, q)<<endl;
    cin>>p>>q;
    cout<<p<<"^"<<q<<"%"<<M<<" = "<<iterative_expoMODULO(p, q)<<endl;
    

  return 0;
}

