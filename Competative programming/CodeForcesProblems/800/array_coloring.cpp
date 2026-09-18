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
// 1) make 2 group(non-empty) such sum paraty is same
// 2) even+even = even, odd+odd=even, odd+even=odd
// 3) odd -> add 1 thus change things
// 4) if odd number of odds then "NO" else "YES"

signed main() {
    fastio();
    int q;
    cin>>q;
    while (q--) {
        int n;
        cin>>n;
        int oddctn=0;
        while (n--) {
            int a;
            cin>>a;
            if(a%2) oddctn++;
        }
        cout<<(oddctn%2?"NO":"YES")<<endl;
    }

    return 0;
}
