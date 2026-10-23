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
#define int long long

// obs
// should make it balanced like if starts with a then, should end with a like aaabababa is balanced

signed main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        if(s[0] == s[n-1]){
            cout << s << endl;
        }else{
            s[0] = s[n-1];
            cout << s << endl;
        }
    }
    return 0;
}
