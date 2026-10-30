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
// For any two positive numbers p and q, the ceiling division property states: -> [q/x] + [p/x] >= [p+q/x]
// so max -> when all separated and min -> when all together

signed main() {
    fastio();
    int t;
    cin>>t;
    while (t--) {
        int n,x;
        cin>>n>>x;
        int sum=0,max=0;
        while(n--){
            int q;
            cin>>q;
            sum+=q;
            max+=(q + x - 1)/x; // ceil value
        }
        int min=(sum + x - 1)/x;
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}
