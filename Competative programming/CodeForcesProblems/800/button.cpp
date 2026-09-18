#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

// obs
// 1) optimal playing means first exaust all common btn then press person
// 2) as Anna(First) so if has to press more btn
// 3) 

signed main() {
    int q;
    cin>>q;
    while (q--) {
        int a,b,c;
        cin>>a>>b>>c;
        int f=0,s=0;
        if(c%2){
            f=c/2 +1;
            s=c/2;
        }
        f+=a;
        s+=b;
        cout<<(f>s?"First":"Second")<<endl;
    }
    return 0;
}
