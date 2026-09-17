#include <bits/stdc++.h>
#include <unordered_map>
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
// 1. any element in c should not divide any element in b
// 2. b[i]%c[j]!=0, for all i and j possible
// 3. if a has same element thus, problems
// 4. if i have more than 1 distinct element then the answer exists

signed main() {
    fastio();
    int q;
    cin>>q;
    while (q--) {
        int n;
        cin>>n;
        unordered_map<int, int> hsh;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            hsh[a]++;
        }
        if(hsh.size()==1){
            cout<<-1<<endl;
            continue;
        }
        vector<pair<int,int>> p;
        for(auto pp:hsh) p.push_back(pp);
        sort(p.begin(),p.end());

        vector<int> b;
        vector<int> c;
        n=p.size();
        for(int i=0;i<n-1;i++){
            int sz=p[i].second;
            int v=p[i].first;
            while(sz--) b.push_back(v);
        }
        int sz=p[n-1].second;
        while(sz--) c.push_back(p[n-1].first);

        cout<<b.size()<<" "<<c.size()<<endl;
        for(int i:b) cout<<i<<" ";
        cout<<endl;
        for(int i:c) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
