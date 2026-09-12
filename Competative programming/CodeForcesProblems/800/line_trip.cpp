#include <algorithm>
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

// minimum capacity of fuel tank to travel btw 0->x->0, with fuel station at
// position array
//
// obs
// 1) as can fill it full -> maximum distance btw 2 gas station -> ans
// 2) 0 and x don't have gas station => 0 and last station to it self is edges case

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x;
    cin >> n >> x;
    vector<int> st(n);
    for (int i = 0; i < n; i++) cin >> st[i];
    sort(st.begin(),st.end());
    int ans = st[0];
    for (int i = 1; i < n; i++){
        ans=max(ans,abs(st[i-1]-st[i]));
    }
    ans=max(ans,2*(x-st[n-1]));
    cout<<ans<<endl;
  }
  return 0;
}

