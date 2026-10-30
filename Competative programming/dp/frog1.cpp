#include <bits/stdc++.h>
#include <climits>
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

const int N=1e5+10;
int n;
int dp[N]; // minimum to reach stop at index i

int jump(int i, vector<int> &a){
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    int cost=INT_MAX;
    // way 1
    cost=min(cost,jump(i-1,a)+abs(a[i]-a[i-1]));
    // way 1
    if(i-1>0) cost=min(cost,jump(i-2,a)+abs(a[i]-a[i-2]));
    return dp[i]=cost;
}

signed main() {
    fastio();
    memset(dp,-1,sizeof(dp));
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<jump(n-1, a)<<endl;
    return 0;
}

