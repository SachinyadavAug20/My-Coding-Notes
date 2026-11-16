#include <bits/stdc++.h>
using namespace std;

#define fastio()                                                               \
  (ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr))
#define MOD 1000000007
#define INF ((long long)1e18)
#define endl '\n'
#define pb push_back
#define mp make_pair

signed main() {
  long long n, d;
  if (!(cin >> n >> d))
    return 0;
  vector<long long> p(n);
  for (int i = 0; i < n; ++i) {
    cin >> p[i];
  }
  sort(p.begin(), p.end());
  int wins = 0;
  int left = 0;
  int right = n - 1;
  while (left <= right) {
    long long max_power = p[right];
    long long needed_size = d / max_power + 1;
    if (right - left + 1 >= needed_size) {
      wins++;
      right--;
      left += (needed_size - 1);
    } else {
      break;
    }
  }
  cout << wins << "\n";
  return 0;
}
