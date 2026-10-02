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
// logically should use smallest to largest till 
// so max is sum of all tools caped by a -> also timer decreases by 1

signed main() {
    fastio();
    int t;
    cin>>t;
    while (t--) {
        int a,b,n;
        cin>>a>>b>>n;
        int ans=b;
        while(n--){
            int x;
            cin>>x;
            ans+=min(a-1,x);
        }
        cout<<ans<<endl;
    }
    return 0;
}
