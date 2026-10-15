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
// can do brute force

class Solution {
public:
  int countPrefixSuffixPairs(vector<string> &words) {
    int count = 0;
    for (int i = 0; i < words.size(); ++i) {
      for (int j = i + 1; j < words.size(); ++j) {
        string &a = words[i]; // take by address to avoid copying
        string &b = words[j];
        if (a.size() <= b.size() && b.compare(0, a.size(), a) == 0 &&
            b.compare(b.size() - a.size(), a.size(), a) == 0) {
          ++count;
        }
      }
    }
    return count;
  }
};
