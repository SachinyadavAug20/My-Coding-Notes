#include <bits/stdc++.h>
#include <vector>
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
// can make subsegment of 1 element thus, need to check is k exist in arr

signed main() {
    fastio();
    int q;
    cin>>q;
    while (q--) {
        int n,k;
        cin>>n>>k;
        vector<int> arr;
        bool ans=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a==k) ans=1;
        }
        cout<<(ans?"YES":"NO")<<endl;
    }

    return 0;
}
