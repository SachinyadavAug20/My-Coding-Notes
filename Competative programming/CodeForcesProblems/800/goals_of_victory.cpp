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
// 1. after a match differenc of goals will be the score of the team but of opposite sign thus, sum of efficieny of both team after 1 match will be 0.
// 2. thus sum of all teams efficiency should be 0

signed main() {
    int q;
    cin>>q;
    while (q--) {
        int n;
        cin>>n;
        int ans=0;
        for(int i=0;i<n-1;i++){
            int a;
            cin>>a;
            ans+=a;
        }
        cout<<(-1*ans)<<endl;
    }
    return 0;
}
