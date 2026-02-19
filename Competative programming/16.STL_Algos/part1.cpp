#include <algorithm>
#include <bits/stdc++.h>
#include <numeric>
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
  vector<int> a;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a.push_back(x);
  }
  arrVect(a);
  sort(a.begin(), a.end());
  arrVect(a);
  cout << "Min is " << *min_element(a.begin(), a.end()) << endl;
  cout << "Max is " << *max_element(a.begin(), a.end()) << endl;
  cout << "accumulate is " << accumulate(a.begin(), a.end(), 0) << endl;
  cout << "Count of 5 is " << count(a.begin(), a.end(), 5) << endl;
  cout << "find 5 "
       << (find(a.begin(), a.end(), 5) != a.end() ? "found" : "not found");
  cout << "rverse ";
  reverse(a.begin() + 1, a.end());
  arrVect(a);
  string nam = "Sachin";
  string Rnam = "Sachin";
  auto end = (&Rnam[Rnam.size() - 1]);
  reverse(&Rnam[0], end);
  cout << "Reverse of \"" << nam << "\" is " << Rnam << endl;
    // All this are O(n) as internally are same loop
}
