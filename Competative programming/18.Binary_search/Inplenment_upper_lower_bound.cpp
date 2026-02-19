#include <algorithm>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void printVec(vector<int> a) {
  for (auto pr : a) {
    cout << pr << " ";
  }
  cout << endl;
}

void lower_bound(vector<int> &v, int element) {
  int hi = v.size() - 1, lo = 0;
  int midd;
  while (hi - lo > 1) {
    midd = (hi + lo) / 2;
    if (v[midd] < element) {
      lo = midd + 1;
    } else {
      hi = midd;
    }
  }
  if (v[lo] >= element) {
    cout << v[lo];
    return;
  } else if (v[hi] >= element) {
    cout << v[hi];
    return;
  } else {
    cout << -1;
  }
}

void upper_bound(vector<int> &v, int element) {
  int hi = v.size() - 1, lo = 0;
  int midd;
  while (hi - lo > 1) {
    midd = (hi + lo) / 2;
    if (v[midd] <= element) { // element eliminated
      lo = midd + 1;
    } else {
      hi=midd;
    }
  }
  if (v[lo] > element) {
    cout << v[lo];
    return;
  } else if (v[hi] > element) {
    cout << v[hi];
    return;
  } else {
    cout << -1;
  }
}
int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  int element;
  cin >> element;
  // find lower_bound

  lower_bound(v, element);
  cout << endl;
  upper_bound(v, element);
}

