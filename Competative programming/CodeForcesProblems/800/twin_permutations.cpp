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
// 1. as condition is to make ai + bi <= a(i+1) + b(i+1)
// 2. can do it == by making all add up to n+1

signed main() {
    fastio();
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int sz=n;
        vector<int> ans;
        while(n--){
            int a;
            cin>>a;
            ans.push_back(sz-a+1);
        }
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
