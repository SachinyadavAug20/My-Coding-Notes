#include <bits/stdc++.h>
using namespace std;

void printvect(vector<int> &a) {

  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main() {
  int n, t;
  cin >> n;
  t = n;
  vector<int> a[n];
  while (n--) {
    int t;
    cin >> t;
    while (t--) {
      int num;
      cin >> num;
      a[n].push_back(num);
    }
  }

  while (t--) {
    printvect(a[t]);
  }
}
