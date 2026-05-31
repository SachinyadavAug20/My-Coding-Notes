// https://codeforces.com/problemset/problem/110/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin>>n;
    int ctn_nl=0;
    while(n>0){
        int d=n%10;
        if(d==4 || d==7) ctn_nl++;
        n/=10;
    }
    int isCtnL;
    if(ctn_nl) isCtnL=1;
    else isCtnL=0;
    while(ctn_nl>0){
        int d=ctn_nl%10;
        if(d!=4 && d!=7) isCtnL=0;
        ctn_nl/=10;
    }
    cout<<(isCtnL?"YES":"NO")<<endl;
    
}
