#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

class Solution {

public:
  int numIdenticalPairs(vector<int> &nums) {
    unordered_map<int, int> hsh;
    for (int i : nums) hsh[i]++;
    int ans = 0;
    for (auto p : hsh) {
      int n = p.second;
      cout << p.first << endl;
      if (n >= 2) {
        ans += (n*(n-1));
        cout << ":" << p.first << ":" << ans << endl;
      }
    }
    return ans/2;
  }
};
