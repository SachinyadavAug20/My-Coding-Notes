#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int a,b;
    cin>>a>>b;
    int lo=1,hi=6;
    int ans=hi;
    // binary monotoic search FFFFTTTTT
    while(hi>=lo){
        int mid=(hi+lo)/2;
        int diff=a*pow(3,mid)-b*pow(2,mid);
        if(diff>0){
            ans=min(ans,mid);
            // cout<<" "<<mid<<endl;
            hi=mid-1;
        }else{
            lo=mid+1;
        }
    }
    cout<<ans<<endl;
}

// n years
// n*3*a>n*2*b
// loop search
// between 1year to ___
// worst case longest time a=1 and b=10
// 1 -> 3 20
// 2 -> 9 40
// 3 -> 27 80
// 4 -> 81 160
// 5 -> 243 320
// 6 -> 729 640  ---> worst
