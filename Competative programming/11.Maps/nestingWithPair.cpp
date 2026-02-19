#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  // map<pair<int, int>, int> m;
  // pair<int, int> p1, p2;
  // p1 = {1, 2};
  // p2 = {2, 3};
  // cout << (p1 < p2) << endl;
  // set<int> s1, s2;
  // s1 = {1, 2, 3, 4};
  // s2 = {1, 3, 1, 2};
  // cout << (s1 < s2) << endl;

  // insertion
  map<pair<string, string>, vector<int>> a;
  int n;
  cin >> n;
  while (n--) {
    string last, first;
    int c;
    cin >> first >> last >> c;
    while (c--) {
      int num;
      cin >> num;
      a[{first, last}].push_back(num);
    }
  }
  for (auto &pr : a) { // reference as it has to not copy
    auto fullname = pr.first;
    cout << fullname.first << " > " << fullname.second << endl;
        cout<<"size : "<<pr.second.size()<<endl;
    for (int &value : pr.second) {
      cout << value << " ";
    }
    cout << endl;
  }
}
