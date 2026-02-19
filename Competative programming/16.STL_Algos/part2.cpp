#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// lamda fn are shorthand notation of a fn
// which return something as t is used in many
// Algo 3rd parameter is a fn
int main() {
  cout << [](int a, int b) { return a + b; }(2, 3)
       << endl; // lamda fn and called
  const auto product = [](int a, int b) { return a * b; };
  cout << product(23, 2) << endl;
  cout << "****************" << endl;
  int n;
  cin >> n;
  vector<int> v;
  while (n--) {
    int a;
    cin >> a;
    v.push_back(a);
  }
  cout << "All positive "
       << all_of(v.begin(), v.end(), [](int a) { return a > 0; }) << endl;
  cout << "Any positive "
       << any_of(v.begin(), v.end(), [](int a) { return a > 0; }) << endl;
  cout << "none positive "
       << none_of(v.begin(), v.end(), [](int a) { return a > 0; }) << endl;
  cout << "All even "
       << all_of(v.begin(), v.end(), [](int a) { return a % 2 == 0; }) << endl;
  cout << "Any even "
       << any_of(v.begin(), v.end(), [](int a) { return a % 2 == 0; }) << endl;
  cout << "none even "
       << none_of(v.begin(), v.end(), [](int a) { return a % 2 == 0; }) << endl;

  // This are fn in STL for convince as interanally they are also same
  // loog ,check and flag logic
}
