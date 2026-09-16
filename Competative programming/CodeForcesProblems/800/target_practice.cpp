#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

// obs
// for rings can be identified by min(x,y)
// point = min(x,y)+1;


signed main() {
    int q;
    cin>>q;
    while (q--) {
        int ans=0;
        for(int i=0;i<10;i++){
            string s;
            cin>>s;
            for(int j=0;j<10;j++){
                if(s[j]=='X'){
                    int dx = min(abs(i - 4), abs(i - 5));
                    int dy = min(abs(j - 4), abs(j - 5));
                    int dist = max(dx, dy);

                    ans+=(5-dist);
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
