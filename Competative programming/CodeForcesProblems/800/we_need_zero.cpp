#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr))
#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define int long long

// obs
// a xor 0 = a | a xor a = 0
// thus, if n%2==0, then x will have no effect -> then if xor of all =0 then,
// x=0 else -1 if n%2==1, then 1 x has effect -> xor all element x = xor of all

signed main() {
  fastio();
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int xo = 0;
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      xo ^= a;
    }
    if(n%2){
        cout<<xo<<endl;
    }else{
        if(!xo){
            cout<<xo<<endl;
        }else {
            cout<<-1<<endl;
        }
    }
  }
  return 0;
}
