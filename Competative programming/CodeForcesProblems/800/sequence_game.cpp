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
// 1. insert iff a[i-1]>a[i] then inset 1 as it is garented smaller or can put a[i] also

signed main() {
    fastio();
    int q;
    cin>>q;
    while (q--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> ans;
        ans.push_back(a[0]);
        for(int i=1;i<n;i++){
            if(a[i-1]<=a[i]){
                ans.push_back(a[i]);
            }else {
                ans.push_back(1);
                // OR 
                // ans.push_back(a[i]);
                ans.push_back(a[i]);
            }
        }

        cout<<ans.size()<<endl;
        for(int i:ans) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
