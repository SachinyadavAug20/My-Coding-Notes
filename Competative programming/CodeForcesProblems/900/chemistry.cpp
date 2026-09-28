#include <bits/stdc++.h>
#include <mutex>
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
// for palindrom every char should be twice except 1(if length odd)
// if
// after removing k char -> odd or even
//
// odd is proble => if problem <= fixes
// Once we've fixed the necessary odd frequencies, extra deletions can generally be made in pairs without causing a problem.
// if there is extra then odd fine

#include <bits/stdc++.h>
using namespace std;

signed main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for (char c : s) {
      freq[c - 'a']++;
    }
    int odd = 0;
    for (int x : freq) {
      if (x % 2 == 1) {
        odd++;
      }
    }

    if (odd <= k + 1)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}
