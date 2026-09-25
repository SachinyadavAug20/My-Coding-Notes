#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  if (a[0] == a[n - 1]) {
    cout << "NO" << endl;
    return;
  }

  swap(a[0], a[n - 1]);

  cout << "YES" << endl;
  for (int i = 0; i < n; i++) {
    cout << a[i] << (i == n - 1 ? "" : " ");
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
