#include <bits/stdc++.h>
using namespace std;

void printvect(vector<int> &a) {

  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main() {
  vector<vector<int>> a;
  while (true) {
    int n;
    cin >> n;
    if (!n) {
      break;
    }
    vector<int> v;
    for (int i = 0; i < n; ++i) {
      int x;
      cin >> x;
      v.push_back(x);
    }
    a.push_back(v);
  }

  // print vector of vectors
  for (int i = 0; i < a.size(); i++) {
    printvect(a[i]);
  }
  cout << a[0][0];
}
// like a dynamic 2D array with no.of row == constant and no.of column as variable
