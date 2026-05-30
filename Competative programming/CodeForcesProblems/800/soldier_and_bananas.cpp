
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll k,n,w;
    cin>>k>>n>>w;
    ll cost=0;
    for(int i=1;i<=w;i++){
        cost+=(i*k);
    }
    int ans=0;
    if(cost-n>0){
        ans=cost-n;
    }
    cout<<ans<<endl;
    return 0;
}
