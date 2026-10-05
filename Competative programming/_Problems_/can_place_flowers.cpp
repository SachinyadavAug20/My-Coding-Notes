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
  bool canPlaceFlowers(vector<int> &flowerbed, int n) {
    if (n == 0) return true;
    for (int i = 0; i < flowerbed.size(); i++) {
      int left = (i == 0) ? 0 : flowerbed[i - 1];
      int right = (i == flowerbed.size() - 1) ? 0 : flowerbed[i + 1];
      if (flowerbed[i] == 0 && left == 0 && right == 0) {
        flowerbed[i] = 1;
        n--;
        if (n == 0)
          return true;
      }
    }
    return false;
  }
};
