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
// divisible by 25 means divisible by 5 and 5
// for a number to be divisible by 25 it's first 2 digits must be divisible by 25 => that is first 2 digits should be 25,50,75,00
// do all possible 2 i and j 
// Deletions = (n - 1 - j) + (j - 1 - i)

signed main() {
    fastio();
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        int ans = n;
        vector<string> targets = {"00", "25", "50", "75"};
        for (string target : targets) {
            int j_idx = -1;
            for (int i = n - 1; i >= 0; i--) {
                if (s[i] == target[1]) {
                    j_idx = i;
                    break;
                }
            }
            if (j_idx == -1) continue;
            int i_idx = -1;
            for (int i = j_idx - 1; i >= 0; i--) {
                if (s[i] == target[0]) {
                    i_idx = i;
                    break;
                }
            }
            if (i_idx == -1) continue;
            int steps = (n - 1 - j_idx) + (j_idx - 1 - i_idx);
            ans = min(ans, steps);
        }

        cout << ans << "\n";
    }
    return 0;
}
