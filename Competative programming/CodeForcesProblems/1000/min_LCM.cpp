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

// obs
// a+b=n, thus a,n-a are choosen
// LCM(a,n-a) should be minimum
// will happend for near equal split 
// like 4 = 2+2 LCM(2,2) = 2, 7 = 3+4 LCM(3,4)=12(no min)
// for prime number 1 , n-1 
// for any composit find factor of it 2,sqrt(n) => n/fac, n-n/fact

signed main() {
    fastio();
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int ans_a=1;
        int ans_b=n-1;
        for(int fac=2;fac*fac<=n;fac++){
            if(n%fac==0){
                ans_a=n/fac;
                ans_b=n-ans_a;
                break;
            }
        }
        cout << ans_a << " " << ans_b << endl;
    }
    return 0;
}
