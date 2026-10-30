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
int n,k;
int dp[N];

int jumpk(int i,vector<int> &a){
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    int cost=INT_MAX;
    for(int j=1;j<=k;j++){
        if(i-j<0) break;
        cost=min(cost,abs(a[i]-a[i-j])+jumpk(i-j, a));
    }
    return dp[i]=cost;
}

signed main() {
    memset(dp,-1,sizeof(dp));
    fastio();
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<jumpk(n-1, a)<<endl;
    return 0;
}
