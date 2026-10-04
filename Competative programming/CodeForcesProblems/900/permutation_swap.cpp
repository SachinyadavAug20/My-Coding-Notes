#include <bits/stdc++.h>
using namespace std;
#include <numeric>

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
// for k=1 -> always possible to sort
// k max is min of distance from correct place O(n) or below
// diff -> place difference from current and after sort
// a -> b diff abs(a-b) should be divible by k(as can make many step)
// abs(p[a]-a)%k==0 -> should be true(only condition for k), for all a in array
// thus need greatest divisor of all diffs(GCD of all position diffs)
// g=|p[1]-1| , gdc(g,p[a]-a) is answer

signed main() {
    fastio();

    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int k=abs(v[0]-1);
        for(int i=1;i<n;i++){
            k=gcd(k,abs(v[i]-i-1));
        }
        cout<<k<<endl;
    }
    return 0;
}
