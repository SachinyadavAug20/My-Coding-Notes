#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void arrVect(vector<int> a) {
  for (int i = 0; i < a.size(); i++) {
    cout << a[i] << " ";
  }
  cout << endl;
}
bool comparator(pair<int, string> a, pair<int, string> b) {
  if (a.first != b.first) {
    return a.first > b.first;
  } else if (a.first == b.first) {
    return a.second < b.second;
  }
  return true;
}
bool rever(int a, int b) { return a > b; }

int main() {
  int n;
  cin >> n;
  set<int> a;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a.insert(x);
  }
  // No need to sort as already sorted

  auto ptr1 = lower_bound(a.begin(), a.end(), 4);     // It is O(n)  ==> WRONG as interanlly it is binary search
  auto ptr2 = a.upper_bound(4);                       // It is O(logn)  ==> RIGHT as internally it is tress traveral
  cout << ((ptr1 != (a.end())) ? (*ptr1) : -1) << " "
       << ((ptr2 != (a.end())) ? (*ptr2) : -1);          

  // sort(a.begin(), a.end());
  // for (int i = 0; i < n; i++) {
  //   cout << a[i] << " ";
  // }
  // cout << endl;
  // auto ptr1 = lower_bound(a.begin(), a.end(), 4);      // It is O(logn)  ==> interanlly it is binary search
  // auto ptr2 = upper_bound(a.begin(), a.end(), 4);

  // if (ptr1 == (a.end())) {
  //   cout << "Not found";
  // } else {
  //   cout << (*ptr1);
  // }
  // cout << " ";
  // if (ptr2 == (a.end())) {
  //   cout << "Not found";
  // } else {
  //   cout << (*ptr2);
  // }
}
