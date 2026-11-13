#include <bits/stdc++.h>
#include <unordered_set>
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
// for max f(a)+f(b) any char which is appear more than 1 will be splited in 2 
// need to make a+b=s also,
// thus, use prefix of uniques till ith index

signed main() {
    fastio();
    int t;
    cin>>t;
    while (t--) {
        int n;
        string s;
        cin>>n>>s;
        vector<int> prefx(n); // no of unique till i
        vector<int> postfx(n); // no of unique after i
        prefx[0]=1;
        postfx[n-1]=1;
        unordered_set<char> ch;
        ch.insert(s[0]);
        for(int i=1;i<n;i++){
            if(ch.find(s[i])==ch.end()) prefx[i]=prefx[i-1]+1;
            else{
              prefx[i]=prefx[i-1];  
            } 
              ch.insert(s[i]);
        }
        ch.clear();
        ch.insert(s[n-1]);
        for(int i=n-2;i>=0;i--){
            if(ch.find(s[i])==ch.end()) postfx[i]=postfx[i+1]+1;
            else {
              postfx[i]=postfx[i+1];
            }
              ch.insert(s[i]);
        }
        int mx=0;
        for(int i=1;i<n;i++){
            mx = max(mx, prefx[i-1] + postfx[i]);
        }
        cout<<mx<<endl;
    }
    return 0;
}
