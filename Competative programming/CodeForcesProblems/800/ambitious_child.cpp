#include <bits/stdc++.h>
#include <climits>
#include <fstream>
using namespace std;

#define fastio() (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr))
#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

// plan
// to make product zero atleast one element is to be 
// so min diff from 0 is the ans

signed main() {
    fastio();
    int q;
    cin>>q;
    int ans=INT_MAX;
    while (q--) {
        int a;
        cin>>a;
        ans=min(ans,abs(a));
    }
    cout<<ans<<endl;
    return 0;
}
