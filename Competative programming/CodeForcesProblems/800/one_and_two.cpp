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
#define int long long

// obs
// product depends on the -> 2 as 1*2=2
// if no of 2 is even -> answser exist
// else -1

signed main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    int c2=0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if(a[i]==2) c2++;
    }
    if(c2==0){
      cout<<1<<endl;
    }
    else if(c2%2==0){
        int c=c2/2;
        int i;
        for(i=0;i<n && c;i++){
            if(a[i]==2) c--;
        }
        cout<<i<<endl;
    }else{
        cout<<-1<<endl;
    }
  }
}
