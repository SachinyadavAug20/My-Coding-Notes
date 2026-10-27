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
// invariance => |a-b| never changes
// gcd(a,b) = gcd(a,|a-b|) 
// gcd(x,0) = x
//

signed main() {
    fastio();
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if (a == b) {
            cout << "0 0\n";
            continue;
        }
        int g = abs(a - b);
        int moves = min(a % g, g - (a % g));
        cout << g << " " << moves << "\n";
    }
    return 0;
}
