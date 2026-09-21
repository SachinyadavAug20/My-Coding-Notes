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

signed main() {
    fastio();
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l=0,r=n-1;
        while(l<r && ((s[l]=='1'&&s[r]=='0') || (s[l]=='0' && s[r]=='1'))){
            l++;
            r--;
        }
        if(l>r){
            cout<<0<<endl;
        }else {
            cout<<r-l+1<<endl;
        }
    }
    return 0;
}
