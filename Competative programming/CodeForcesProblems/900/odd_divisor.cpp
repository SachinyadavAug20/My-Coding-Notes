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
// will have odd divisor if have no even like
// divide by 2 till not possible

signed main() {
    fastio();
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        while(n%2==0){
            n=n/2;
        }
        cout<<(n==1?"NO":"YES")<<endl;
    }
    return 0;
}
