#include <bits/stdc++.h>
using namespace std;

// obs
// if all elements same = "NO"
// else "YES"
// make example by puting largest at 0th index -> will gurante prefix sum > all element

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int &x : a) {
    cin >> x;
  }
  if (a[0] == a[n - 1]) {
    cout << "NO\n";
    return;
  }
  cout << "YES\n";
  cout << a[n - 1] << " ";
  for (int i = 0; i < n - 1; i++) {
    cout << a[i] << " ";
  }
  cout << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
