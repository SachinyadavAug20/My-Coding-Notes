#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long

// obs
// 1. as line is symtric so can take abs(x)
// 2. answer can be 1 or 2 (only)

signed main() {
    int t;
    cin>>t;
    while (t--) {
        int x,k;
        cin>>x>>k;
        x=abs(x);
        if(x%k!=0){
            cout<<1<<endl<<x<<endl;
        }else {
            cout<<2<<endl;
            int i=0,s;
            // Obsevation
            // loop is redundent as x%s==0 => (x+1)%s==1 and 1%s==1 always
            do{
                i++;
                s=x+i;
            }while(!(s%k!=0 && i%k!=0));
            cout<<s<<" "<<-i<<endl;
        }
    }
    return 0;
}
