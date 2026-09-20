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
// 1) 2 is a denomination thus all evens are possible
// 2) if k%2==0 -> nothing has changes only even can be represented 
// 3) if k%2==1 -> will have all odds after k becomes possible

signed main() {
    fastio();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n%2==0){
            cout<<"YES"<<endl;
        }else{
            if(k%2==0){
                cout<<"NO"<<endl;
            }else{
                if(n>=k){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }
        }

    }
    return 0;
}
