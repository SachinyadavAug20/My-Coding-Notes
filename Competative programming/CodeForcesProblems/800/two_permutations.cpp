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
// a+b=n => NO 
// a=n and b=n -> YES
// a+b <= n-2 -> YES
// else NO

signed main() {
    fastio();
    int t;
    cin>>t;
    while (t--) {
        int n,a,b;
        cin>>n>>a>>b;
        if(a==n && b==n) cout<<"YES"<<endl;
        else if(a+b<=n-2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
