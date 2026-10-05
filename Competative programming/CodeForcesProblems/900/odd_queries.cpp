#include <bits/stdc++.h>
#include <locale>
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

// 
// find current total => remove that l to r and add l-r+1 * k -> check if odd or even

signed main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        int n,q;
        cin >> n>>q;
        vector<int> v(n);
        int sum=0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum+=v[i];
        }
        vector<int> preSum(n);
        preSum[0]=v[0];
        for(int i=1;i<n;i++) preSum[i]=preSum[i-1]+v[i];
        while (q--) {
            int l,r,k;
            cin>>l>>r>>k;
            l--,r--; // as query as 1 based
            int ls=l-1<0?0:preSum[l-1];
            int rs=preSum[r];
            int sumLR=rs-ls;
            int offer=(r-l+1)*k;
            int vv=sum-sumLR+offer;
            if(vv%2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}
