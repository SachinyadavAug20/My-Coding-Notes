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

signed main() {
    int q;
    cin>>q;
    while (q--) {
        int n;
        cin>>n;
        if(n%3){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    }
    return 0;
}
