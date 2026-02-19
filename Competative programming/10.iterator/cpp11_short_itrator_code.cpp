#include <bits/stdc++.h>
using namespace std;

void printvect(vector<int> &a) {

  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main() {
  vector<int> a = {1, 2, 3, 4};

  for (vector<int>::iterator it = a.begin(); it != a.end(); it++) {
    cout << *it << " ";
  }
  cout << endl;
  // OR way
  for (int i : a) {
    // i is copy of value
    i++;
    cout << i << " ";
  }
  cout << endl;
  printvect(a);
  for (int &i : a) {
    // i is actual of value
    i += 10;
  }
  printvect(a);

  // for pair
  vector<pair<int, int>> p = {{1, 2}, {2, 3}, {3, 4}};
  for (pair<int, int> &i : p) {
    cout << "(" << i.first << "," << i.second << ")" << " ";
  }
  cout << endl;
  // use auto key word
  for (auto &i : p) {
    cout << "(" << i.first << "," << i.second << ")" << " ";
  }
  cout << endl;
  for (auto it = a.begin(); it != a.end(); it++) {
    cout << *it << " ";
  }
}
