#include <bits/stdc++.h>
#include <sys/types.h>
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

signed main() {
    fastio();
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int sz=0;
        int ans=0;
        while(n--){
            int a;
            cin>>a;
            if(a==0){
                sz++;
                ans=max(ans,sz);
            }else{
                sz=0;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
