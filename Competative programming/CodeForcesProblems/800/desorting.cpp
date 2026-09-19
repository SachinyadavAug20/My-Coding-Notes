#include <bits/stdc++.h>
#include <climits>
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
// ans will be min difference btw 2 consective so make it unsorted

signed main() {
    fastio();
    int q;
    cin>>q;
    while (q--) {
        int n;
        cin>>n;
        int prev=INT_MIN,a;
        int minGap=INT_MAX;
        bool isSorted=1;
        while (n--) {
            cin>>a;
            if(a<prev){
                isSorted=0;
            }else{
                minGap=min(minGap,a-prev);
                prev=a;
            }
        }
        if(!isSorted){
            cout<<0<<endl;
        }else {
            cout<<minGap/2 +1<<endl;
        }
    }
    return 0;
}
