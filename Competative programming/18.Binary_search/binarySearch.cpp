#include <bits/stdc++.h>

using namespace std;

void printVec(vector<int> a) {
  for (auto pr : a) {
    cout << pr << " ";
  }
  cout << endl;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int to_find;
  cin >> to_find;
  // for index
  pair<int, int> searchSpace = {0, n - 1};
  int midd, found = 0;

  while (searchSpace.second - searchSpace.first > 1) {
    midd = (searchSpace.second + searchSpace.first) / 2;
    if (a[midd] < to_find) {
      searchSpace.first = midd;
    } else {
      searchSpace.second = midd;
    }
  }
  if (a[searchSpace.first] == to_find) {
    midd = searchSpace.first;
    found = 1;
  } else if (a[searchSpace.second] == to_find) {
    midd = searchSpace.second;
    found = 1;
  } else {
    found = 0;
  }

  // display output
  if (!found) {
    cout << "not found";
  } else {
    cout << "found " << to_find << " at index " << midd;
  }
}
