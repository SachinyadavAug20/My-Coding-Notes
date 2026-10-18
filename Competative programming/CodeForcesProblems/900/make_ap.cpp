#include <bits/stdc++.h>
using namespace std;

#define fastio() (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr))
#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long

// obs
// 3 possibility 
// multiple with a, b, or c
// multiple will always increase the number as all positives

signed main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin >> a >> b >> c;
        int ss=a+c;
        if(ss==2*b){
            cout<<"YES"<<endl;
            continue;
        }
        if(ss<2*b){
            // try to multiply a,c
            // if a -> am => 2b=am+c ===> m = (2b-c)/a
            if((2*b-c>0)&&(2*b-c)%a==0){
                cout<<"YES"<<endl;
                continue;
            }

            // if c -> cm => 2b=a+cm ===> m = (2b-a)/c
            if((2*b-a>0)&&(2*b-a)%c==0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            // try to multiply b
            if(ss%(2*b)==0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
