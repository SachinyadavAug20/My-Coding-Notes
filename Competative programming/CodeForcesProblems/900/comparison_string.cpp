#include <bits/stdc++.h>
#include <mutex>
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
// <<>>><<> -> we can keep track of max length of continoue >>>> or <<<<<
// for that will ne uniue char which will increase the cost of array

signed main() {
    fastio();
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        // '<' and '>'
        char prev=s[0];
        int ans=0,cur=1;
        for(int i=1;i<n;i++){
            if(prev==s[i]){
                cur++;
                ans=max(ans,cur);
            }else{
                cur=1;
            }
            ans=max(ans,cur);
            prev=s[i];
        }
        ans=max(ans,cur);
        cout<<ans+1<<endl;
    }
    return 0;
}
