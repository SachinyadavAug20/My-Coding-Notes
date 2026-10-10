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
// 2 options 4 wheel and 6 wheel
// to maximize use most 4 wheel and minimze by 6 wheel
// if divisible by 4

signed main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if(n<4 || n%2==1){
            cout<<-1<<endl;
        }else{
            int minB=ceil(n*1.0/6);
            int maxB=n/4;
            cout<<minB<<" "<<maxB<<endl;
        }
    }
    return 0;
}
