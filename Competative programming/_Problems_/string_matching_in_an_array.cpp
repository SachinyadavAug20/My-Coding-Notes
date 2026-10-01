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

class Solution {
public:
  vector<string> stringMatching(vector<string> &words) {
    vector<string> result;

    for (int i = 0; i < words.size(); ++i) {
      for (int j = 0; j < words.size(); ++j) {
        if (i == j)
          continue;

        if (words[j].find(words[i]) != string::npos) {
          result.push_back(words[i]);
          break;
        }
      }
    }
    return result;
  }// O(n^2)
};
