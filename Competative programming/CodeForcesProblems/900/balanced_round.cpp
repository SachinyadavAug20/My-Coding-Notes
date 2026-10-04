#include <algorithm>
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
//
// sort the array in order -> 
// weather abs diff < k => then, will remove element
// after sorting look for continour sequence only

signed main() {
    fastio();
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        int ans=0;
        int cur=0;
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]<=k){
                cur++;
            }else{
                cur=0;
            }
            ans=max(ans,cur);
        }
        cout<<n-ans-1<<endl;
    }
    return 0;
}
