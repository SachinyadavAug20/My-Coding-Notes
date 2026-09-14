#include <bits/stdc++.h>
#include <unordered_map>
#include <vector>
using namespace std;

#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first

// simplify problem
// a[i-1]+a[i]=a[i]+a[i+1], 2<i<n-1
// a[i-1]=a[i+1] , 1<i<n-1
//
// thus, need only 2 number repeated -> if odd number of nums.
// odd index and even index position should have same number p,o.
//
// NO when,
// more than 3 distinct integer

signed main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int, int> hsh;
        for(int i=0;i<n;i++) {
            int a;
            cin>>a;
            hsh[a]++;
        }
        if(hsh.size()>2){
            cout<<"NO"<<endl;
        }else if(hsh.size()==1){
            cout<<"YES"<<endl;
        }else{
            vector<int> v;
            for(auto p:hsh){
                v.push_back(p.second);
            }
            int a=v[0],b=v[1];
            cout<<(abs(a-b)<2?"YES":"NO")<<endl;
        }
    }

    return 0;
}
