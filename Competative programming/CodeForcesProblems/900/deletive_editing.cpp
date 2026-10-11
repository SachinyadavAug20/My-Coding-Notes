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
//
// obs
// main problem : is deleting the first occurance not any position
// after pattern found need to see all elements after it should not have any letter of it
// 

void solve() {
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    vector<int> cnt(26, 0);
    for (char c : s2) cnt[c - 'A']++;
    int j = m - 1;
    for (int i = n - 1; i >= 0; i--) {
        char c = s1[i];
        if (cnt[c - 'A'] > 0) {
            if (j >= 0 && s2[j] == c) {
                cnt[c - 'A']--;
                j--;
            } else {
                cout << "NO\n";
                return;
            }
        }
    }
    if (j == -1) cout << "YES\n";
    else cout << "NO\n";
}

signed main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
